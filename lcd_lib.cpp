#include <SDL2/SDL.h>
#include "lcd_lib.h"

SDL_Window *window;
SDL_Renderer *renderer;

uint16_t screen_buffer[LCD_WIDTH * LCD_HEIGHT]={0};
bool PTC9;
bool PTC10;
bool PTC11;
bool PTC12;

void lcd_init()
{
    if (SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        exit(1);
    }

    window = SDL_CreateWindow(LCD_NAME, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              LCD_WIDTH, LCD_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    if (!window)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
    {
        SDL_DestroyWindow(window);
        fprintf(stderr, "SDL_CreateRenderer Error: %s", SDL_GetError());
        SDL_Quit();
        exit(1);
    }
    SDL_RenderSetLogicalSize(renderer, LCD_WIDTH, LCD_HEIGHT);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, 0);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void lcd_put_pixel(int32_t t_x, int32_t t_y, uint16_t t_rgb_565)
{
    if (t_x < 0 || t_x >= LCD_WIDTH || t_y < 0 || t_y >= LCD_HEIGHT)
        return;
    screen_buffer[t_x + t_y * LCD_WIDTH] = t_rgb_565;   
}

void lcd_update()
{
    for (size_t i = 0; i < LCD_HEIGHT*LCD_WIDTH; i++)
    {
        //565 to 888
        SDL_SetRenderDrawColor(renderer, (screen_buffer[i] & 0xF800) >> 8, (screen_buffer[i] & 0x07E0) >> 3, (screen_buffer[i] & 0x001F) << 3, 255);
        SDL_RenderDrawPoint(renderer, i % LCD_WIDTH, i / LCD_WIDTH);
    }
    
    SDL_RenderPresent(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);  
}
void lcd_clean()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_VideoQuit();

    SDL_Quit();
}

void lcd_dontclose()
{
    SDL_Event e;
    while (1)
    {
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                lcd_clean();
                exit(0);
            }
            
        }
        const Uint8* state = SDL_GetKeyboardState(nullptr);
        PTC9 = !state[SDL_SCANCODE_V];
        PTC10 = !state[SDL_SCANCODE_B];
        PTC11 = !state[SDL_SCANCODE_N];
        PTC12 = !state[SDL_SCANCODE_M];
        
        lcd_update();
    }
}