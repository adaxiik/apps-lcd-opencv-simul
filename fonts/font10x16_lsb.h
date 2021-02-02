const uint16_t font[ 256 ][ 16 ] = {
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0078,0x0186,0x034B,0x0201,0x0285,0x037B,0x0186,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0078,0x01FE,0x03B7,0x03FF,0x037B,0x0387,0x01FE,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x01CE,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x01FE,0x01FE,0x00FC,0x00FC,0x0078,0x0030,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x0010,0x0038,0x007C,0x00FC,0x01FE,0x03FF,0x01FE,0x00FC,0x0078,0x0030,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0030,0x0078,0x0078,0x0078,0x01FE,0x03FF,0x03FF,0x03FF,0x01DE,0x0030,0x0030,0x0030,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0030,0x0078,0x00FC,0x01FE,0x03FF,0x03FF,0x03FF,0x01DE,0x0030,0x0030,0x0030,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0180,0x01E0,0x0380,0x0240,0x007C,0x0042,0x0081,0x0081,0x0081,0x0081,0x0042,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x00C4,0x0078,0x0010,0x007C,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0100,0x01C0,0x0178,0x0118,0x0108,0x0108,0x0108,0x0108,0x01C8,0x01E8,0x00E8,0x000E,0x000F,0x0007,0x0000},
{0x0000,0x0000,0x0000,0x0010,0x01BA,0x00C6,0x0102,0x0303,0x0186,0x01FE,0x0010,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0001,0x0007,0x003F,0x00FF,0x03FF,0x00FF,0x003F,0x0007,0x0001,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0200,0x0380,0x03F0,0x03FC,0x03FF,0x03FC,0x03F0,0x0380,0x0200,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x0038,0x0054,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0054,0x0038,0x0010,0x0000},
{0x0000,0x0024,0x0024,0x0024,0x0024,0x0024,0x0024,0x0024,0x0024,0x0024,0x0000,0x0024,0x0024,0x0000,0x0000,0x0000},
{0x0000,0x00FC,0x009E,0x009E,0x009E,0x009C,0x0098,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0000},
{0x0000,0x00F8,0x0004,0x0004,0x000C,0x0038,0x0064,0x0084,0x008C,0x00B8,0x0060,0x00C0,0x0080,0x0084,0x007C,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x01FE,0x01FE,0x01FE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x0038,0x0054,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0054,0x0038,0x0010,0x0000,0x007C},
{0x0000,0x0010,0x0038,0x0054,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000},
{0x0000,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0054,0x0038,0x0010,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0040,0x0080,0x01FE,0x0080,0x0040,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0008,0x0004,0x01FE,0x0004,0x0008,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x01FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0048,0x0084,0x01FE,0x0084,0x0048,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0020,0x0020,0x0070,0x0078,0x00F8,0x00FC,0x01FC,0x01FE,0x03FF,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x03FF,0x01FE,0x01FC,0x00FC,0x00F8,0x0078,0x0070,0x0020,0x0020,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0044,0x0044,0x0044,0x0044,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0090,0x0090,0x0048,0x0048,0x01FE,0x0048,0x0024,0x01FF,0x0024,0x0024,0x0012,0x0012,0x0000,0x0000,0x0000},
{0x0020,0x00F8,0x002C,0x0024,0x0024,0x0028,0x0030,0x0060,0x00E0,0x00A0,0x00A0,0x00A4,0x007C,0x0020,0x0000,0x0000},
{0x0000,0x020E,0x0111,0x0091,0x0051,0x004E,0x0020,0x0010,0x01C8,0x0228,0x0224,0x0222,0x01C1,0x0000,0x0000,0x0000},
{0x0000,0x0038,0x0044,0x0044,0x0064,0x0038,0x000C,0x0212,0x0231,0x0121,0x0141,0x00C2,0x01FC,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0180,0x0060,0x0030,0x0010,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0010,0x0030,0x0060,0x0180,0x0000},
{0x0000,0x0006,0x0018,0x0030,0x0020,0x0040,0x0040,0x0040,0x0040,0x0040,0x0040,0x0020,0x0030,0x0018,0x0006,0x0000},
{0x0000,0x0010,0x0010,0x00D6,0x006C,0x0028,0x0038,0x0028,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0010,0x0010,0x0010,0x0010,0x01FF,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0010,0x0010,0x0008},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00FC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0000,0x0000,0x0000},
{0x0000,0x0100,0x0080,0x0080,0x0040,0x0040,0x0020,0x0020,0x0010,0x0010,0x0008,0x0008,0x0004,0x0004,0x0002,0x0000},
{0x0000,0x0038,0x0044,0x0044,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0010,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x003E,0x0042,0x0040,0x0040,0x0040,0x0020,0x0020,0x0010,0x0008,0x0004,0x0002,0x007E,0x0000,0x0000,0x0000},
{0x0000,0x003C,0x0040,0x0040,0x0040,0x0040,0x0038,0x0040,0x0040,0x0040,0x0040,0x0040,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0030,0x0028,0x0028,0x0024,0x0022,0x0022,0x0021,0x00FF,0x0020,0x0020,0x0020,0x0000,0x0000,0x0000},
{0x0000,0x007C,0x0004,0x0004,0x0004,0x001C,0x0020,0x0040,0x0040,0x0040,0x0040,0x0020,0x001C,0x0000,0x0000,0x0000},
{0x0000,0x0078,0x0004,0x0004,0x0002,0x003A,0x0046,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x00FE,0x0080,0x0040,0x0020,0x0020,0x0010,0x0010,0x0008,0x0008,0x0008,0x0004,0x0004,0x0000,0x0000,0x0000},
{0x0000,0x007C,0x0082,0x0082,0x0082,0x0064,0x0018,0x0064,0x0042,0x0082,0x0082,0x0042,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x00C4,0x00B8,0x0080,0x0040,0x0040,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0000,0x0000,0x0000,0x0000,0x0018,0x0018,0x0010,0x0010,0x0008},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0100,0x00C0,0x0030,0x000C,0x000C,0x0030,0x00C0,0x0100,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x01FE,0x0000,0x0000,0x01FE,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x000C,0x0030,0x00C0,0x00C0,0x0030,0x000C,0x0002,0x0000,0x0000,0x0000},
{0x0000,0x007E,0x00C2,0x0082,0x0080,0x0040,0x0020,0x0010,0x0008,0x0008,0x0000,0x0008,0x0008,0x0000,0x0000,0x0000},
{0x0000,0x0078,0x0084,0x00E2,0x0093,0x0089,0x0089,0x00C9,0x00C9,0x00E9,0x03B2,0x0046,0x007C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x007E,0x0082,0x0082,0x0042,0x003E,0x0042,0x0082,0x0082,0x0082,0x007E,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00F8,0x0086,0x0002,0x0001,0x0001,0x0001,0x0001,0x0002,0x0006,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x003E,0x0042,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0042,0x003E,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x0002,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x01F0,0x010C,0x0004,0x0002,0x0002,0x01C2,0x0102,0x0104,0x010C,0x01F0,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x00FE,0x0082,0x0082,0x0082,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00FE,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0078,0x0040,0x0040,0x0040,0x0040,0x0040,0x0040,0x0040,0x0040,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0082,0x0042,0x0022,0x0012,0x000E,0x000A,0x0012,0x0062,0x0082,0x0102,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00C3,0x00C3,0x00C7,0x00A5,0x00A5,0x00AD,0x0099,0x0099,0x0081,0x0081,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0082,0x0086,0x008A,0x008A,0x0092,0x0092,0x00A2,0x00A2,0x00C2,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x007E,0x0082,0x0082,0x0082,0x0042,0x003E,0x0002,0x0002,0x0002,0x0002,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0040,0x0180,0x0000},
{0x0000,0x0000,0x0000,0x003E,0x0042,0x0042,0x0042,0x0022,0x001E,0x0012,0x0022,0x0042,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00FC,0x0082,0x0002,0x0006,0x0018,0x0060,0x0080,0x0080,0x00C2,0x003E,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x01FF,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0201,0x0102,0x0102,0x0084,0x0084,0x0044,0x0048,0x0048,0x0030,0x0030,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0201,0x0201,0x0112,0x0132,0x0132,0x012A,0x014A,0x00CC,0x00CC,0x0084,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0201,0x0102,0x0084,0x0048,0x0030,0x0030,0x0048,0x0084,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0201,0x0102,0x0084,0x0044,0x0028,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x01FE,0x0100,0x0080,0x0040,0x0020,0x0010,0x0008,0x0004,0x0002,0x01FE,0x0000,0x0000,0x0000},
{0x0000,0x00F8,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x00F8,0x0000},
{0x0000,0x0002,0x0004,0x0004,0x0008,0x0008,0x0010,0x0010,0x0020,0x0020,0x0040,0x0040,0x0080,0x0080,0x0100,0x0000},
{0x0000,0x003E,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x003E,0x0000},
{0x0000,0x0020,0x0020,0x0030,0x0050,0x0058,0x0048,0x0088,0x0084,0x0084,0x0102,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0000,0x0000},
{0x0010,0x0020,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0000,0x0002,0x0002,0x0002,0x0002,0x007A,0x0046,0x0082,0x0082,0x0082,0x0082,0x0046,0x003A,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00F8,0x0004,0x0002,0x0002,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0080,0x0080,0x0080,0x0080,0x00B8,0x00C4,0x0082,0x0082,0x0082,0x0082,0x00C4,0x00BC,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0078,0x0084,0x0082,0x00FE,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x01E0,0x0018,0x0008,0x0008,0x01FE,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00B8,0x00C4,0x0082,0x0082,0x0082,0x0082,0x00C4,0x00BC,0x0080,0x0040,0x003C},
{0x0000,0x0002,0x0002,0x0002,0x0002,0x0072,0x008A,0x0086,0x0082,0x0082,0x0082,0x0082,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0018,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0030,0x0030,0x0000,0x0000,0x003C,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x001E},
{0x0000,0x0002,0x0002,0x0002,0x0002,0x0082,0x0062,0x0012,0x000E,0x000A,0x0032,0x0042,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x003C,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00CD,0x0133,0x0111,0x0111,0x0111,0x0111,0x0111,0x0111,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0072,0x008E,0x0086,0x0082,0x0082,0x0082,0x0082,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x007A,0x0046,0x0082,0x0082,0x0082,0x0082,0x0046,0x003A,0x0002,0x0002,0x0002},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00B8,0x00C4,0x0082,0x0082,0x0082,0x0082,0x00C4,0x00BC,0x0080,0x0080,0x0080},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00E4,0x0094,0x008C,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x007C,0x0002,0x0002,0x000C,0x0030,0x0040,0x0042,0x003E,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0008,0x0008,0x00FE,0x0008,0x0008,0x0008,0x0008,0x0008,0x0008,0x00F0,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0042,0x0042,0x0042,0x0042,0x0042,0x0042,0x0062,0x005C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0101,0x0082,0x0082,0x0042,0x0044,0x0024,0x0028,0x0018,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0201,0x0211,0x0132,0x0132,0x014A,0x014A,0x00CC,0x0084,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0102,0x0084,0x0048,0x0030,0x0030,0x0048,0x0084,0x0102,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0201,0x0102,0x0102,0x0084,0x004C,0x0048,0x0030,0x0030,0x0010,0x0008,0x0007},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x01FE,0x0080,0x0040,0x0020,0x0010,0x0008,0x0004,0x01FE,0x0000,0x0000,0x0000},
{0x0000,0x00E0,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x000C,0x0010,0x0010,0x0010,0x0010,0x0010,0x00E0,0x0000},
{0x0000,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000},
{0x0000,0x001C,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x00C0,0x0020,0x0020,0x0020,0x0020,0x0020,0x001C,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x020E,0x0231,0x01C1,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0010,0x0028,0x0044,0x00C6,0x0082,0x0082,0x0082,0x0082,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x00F8,0x0086,0x0002,0x0001,0x0001,0x0001,0x0001,0x0002,0x0006,0x00F8,0x0040,0x0080,0x00E0},
{0x0000,0x0000,0x0024,0x0000,0x0000,0x0042,0x0042,0x0042,0x0042,0x0042,0x0042,0x0062,0x005C,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x0078,0x0084,0x0082,0x00FE,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0024,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0024,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0000,0x0004,0x0008,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0010,0x0028,0x0010,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00F8,0x0004,0x0002,0x0002,0x0002,0x0002,0x0004,0x00F8,0x0020,0x0040,0x0070},
{0x0000,0x0018,0x0024,0x0000,0x0000,0x0078,0x0084,0x0082,0x00FE,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0048,0x0000,0x0000,0x0078,0x0084,0x0082,0x00FE,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0008,0x0010,0x0000,0x0000,0x0078,0x0084,0x0082,0x00FE,0x0002,0x0002,0x0004,0x00F8,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0024,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0024,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0008,0x0010,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0044,0x0000,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0030,0x0030,0x0068,0x0048,0x0048,0x00C4,0x0084,0x01FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0020,0x0010,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00EF,0x0110,0x0110,0x01FE,0x0013,0x0011,0x0031,0x01EE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x01F0,0x0030,0x0028,0x0028,0x0024,0x00E4,0x0024,0x003E,0x0022,0x01E1,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0024,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0024,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0004,0x0008,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0024,0x0000,0x0000,0x0042,0x0042,0x0042,0x0042,0x0042,0x0042,0x0062,0x005C,0x0000,0x0000,0x0000},
{0x0000,0x0004,0x0008,0x0000,0x0000,0x0042,0x0042,0x0042,0x0042,0x0042,0x0042,0x0062,0x005C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0024,0x0000,0x0000,0x0201,0x0102,0x0102,0x0084,0x004C,0x0048,0x0030,0x0030,0x0010,0x0008,0x0007},
{0x0044,0x0000,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0044,0x0000,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x00B8,0x0044,0x00A2,0x0092,0x0092,0x008A,0x0044,0x003A,0x0000,0x0000,0x0000},
{0x0000,0x00E0,0x0010,0x0010,0x0010,0x0010,0x0078,0x0010,0x0010,0x0010,0x0010,0x0008,0x00FC,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0178,0x0084,0x01C2,0x0142,0x0122,0x0112,0x010A,0x010E,0x0084,0x007A,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0102,0x0084,0x0048,0x0030,0x0030,0x0048,0x0084,0x0102,0x0000,0x0000,0x0000},
{0x00E0,0x0010,0x0010,0x0010,0x0010,0x007C,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x000E},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x0042,0x0042,0x0042,0x0042,0x0042,0x0042,0x0062,0x005C,0x0000,0x0000,0x0000},
{0x0000,0x0048,0x0034,0x0000,0x0000,0x0072,0x008E,0x0086,0x0082,0x0082,0x0082,0x0082,0x0082,0x0000,0x0000,0x0000},
{0x0058,0x0034,0x0000,0x0082,0x0086,0x008A,0x008A,0x0092,0x0092,0x00A2,0x00A2,0x00C2,0x0082,0x0000,0x0000,0x0000},
{0x0000,0x003C,0x0040,0x0078,0x0044,0x0044,0x00F8,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0078,0x0084,0x0084,0x0084,0x0084,0x0078,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x0020,0x0000,0x0020,0x0020,0x0010,0x000C,0x0002,0x0082,0x0086,0x00FC},
{0x0000,0x0038,0x0044,0x00BA,0x00AA,0x00BA,0x0044,0x0038,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x01FE,0x0100,0x0100,0x0100,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0083,0x0042,0x0042,0x0022,0x0012,0x0012,0x01C8,0x0208,0x0204,0x0182,0x0082,0x03C1,0x0000,0x0000,0x0000},
{0x0000,0x0083,0x0042,0x0042,0x0022,0x0012,0x0012,0x0188,0x0148,0x0124,0x03E2,0x0102,0x0101,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x0020,0x0000,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020,0x0020},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0110,0x0088,0x0044,0x0022,0x0044,0x0088,0x0110,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0022,0x0044,0x0088,0x0110,0x0088,0x0044,0x0022,0x0000,0x0000,0x0000,0x0000},
{0x00DB,0x00DB,0x0000,0x00DB,0x00DB,0x0000,0x00DB,0x00DB,0x0000,0x0000,0x00DB,0x00DB,0x0000,0x00DB,0x00DB,0x0000},
{0x036C,0x036C,0x00DB,0x03FF,0x036C,0x00DB,0x03FF,0x036C,0x00DB,0x00DB,0x036C,0x03FF,0x00DB,0x036C,0x03FF,0x00DB},
{0x03FF,0x03FF,0x00DB,0x03FF,0x03FF,0x00DB,0x03FF,0x03FF,0x00DB,0x00DB,0x03FF,0x03FF,0x00DB,0x03FF,0x03FF,0x00DB},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x001F,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0020,0x0010,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0008,0x0010,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0000,0x007C,0x00C6,0x0082,0x0179,0x010D,0x0105,0x0105,0x010D,0x0179,0x0082,0x00C6,0x007C,0x0000,0x0000,0x0000},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x002F,0x0020,0x002F,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x003F,0x0020,0x002F,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x002F,0x0020,0x003F,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x00F8,0x0024,0x0022,0x0022,0x0022,0x0022,0x0022,0x0022,0x002C,0x00F8,0x0020,0x0000,0x0000,0x0000},
{0x0000,0x0201,0x0102,0x0084,0x0044,0x0028,0x0010,0x007C,0x0010,0x0010,0x007C,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x001F,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x03F0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x03F0,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x03FF,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x0000,0x0048,0x0034,0x0000,0x0000,0x003C,0x0040,0x0040,0x0078,0x0044,0x0042,0x0062,0x00DC,0x0000,0x0000,0x0000},
{0x0058,0x0034,0x0000,0x0010,0x0038,0x0028,0x0048,0x0044,0x0084,0x00FE,0x0102,0x0102,0x0201,0x0000,0x0000,0x0000},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x03E8,0x0008,0x03F8,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03F8,0x0008,0x03E8,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x03EF,0x0000,0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0000,0x03EF,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x03E8,0x0008,0x03E8,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0000,0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028,0x03EF,0x0000,0x03EF,0x0028,0x0028,0x0028,0x0028,0x0028,0x0028},
{0x0000,0x0000,0x0000,0x0102,0x00FC,0x0084,0x0084,0x0084,0x0084,0x00FC,0x0102,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x002E,0x0018,0x002C,0x0040,0x0078,0x00C4,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x003E,0x0042,0x0082,0x0082,0x008F,0x0082,0x0082,0x0082,0x0042,0x003E,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0044,0x0000,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0010,0x0020,0x0000,0x00FE,0x0002,0x0002,0x0002,0x0002,0x007E,0x0002,0x0002,0x0002,0x00FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x001E,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x0020,0x0010,0x0000,0x00FE,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0000,0x00FE,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x0044,0x0000,0x0000,0x00FE,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x001F,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03F0,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010},
{0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF},
{0x0000,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000},
{0x0008,0x0010,0x0000,0x00FE,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x00FE,0x0000,0x0000,0x0000},
{0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0020,0x0010,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x001C,0x0022,0x0022,0x0022,0x0012,0x0012,0x0012,0x0022,0x0042,0x0082,0x0082,0x0072,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0008,0x0010,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x0048,0x0034,0x0000,0x0000,0x0038,0x0044,0x0082,0x0082,0x0082,0x0082,0x0044,0x0038,0x0000,0x0000,0x0000},
{0x0058,0x0034,0x0000,0x0078,0x0084,0x0102,0x0102,0x0102,0x0102,0x0102,0x0102,0x0084,0x0078,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x00C6,0x00BA,0x0002,0x0002,0x0002},
{0x0000,0x0002,0x0002,0x0002,0x0002,0x007A,0x0046,0x0082,0x0082,0x0082,0x0082,0x0046,0x003A,0x0002,0x0002,0x0002},
{0x0000,0x0000,0x0000,0x0002,0x0002,0x007E,0x0082,0x0082,0x0082,0x0042,0x003E,0x0002,0x0002,0x0000,0x0000,0x0000},
{0x0020,0x0010,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x003C,0x0000,0x0000,0x0000},
{0x0030,0x0048,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x003C,0x0000,0x0000,0x0000},
{0x0008,0x0010,0x0000,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0082,0x0044,0x003C,0x0000,0x0000,0x0000},
{0x0000,0x0020,0x0010,0x0000,0x0000,0x0201,0x0102,0x0102,0x0084,0x004C,0x0048,0x0030,0x0030,0x0010,0x0008,0x0007},
{0x0020,0x0010,0x0000,0x0201,0x0102,0x0084,0x0044,0x0028,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000},
{0x03FF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0010,0x0008,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00FC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x0020,0x01FE,0x0020,0x0020,0x0000,0x0000,0x01FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x03FF,0x0000,0x03FF},
{0x0000,0x020F,0x0108,0x0086,0x004C,0x0048,0x0027,0x0190,0x0148,0x0128,0x03E4,0x0102,0x0101,0x0000,0x0000,0x0000},
{0x0000,0x00FC,0x009E,0x009E,0x009E,0x009C,0x0098,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0090,0x0000},
{0x0000,0x00F8,0x0004,0x0004,0x000C,0x0038,0x0064,0x0084,0x008C,0x00B8,0x0060,0x00C0,0x0080,0x0084,0x007C,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0030,0x0030,0x0000,0x0000,0x01FE,0x0000,0x0030,0x0030,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x0040,0x0070},
{0x0000,0x0030,0x0048,0x0048,0x0030,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0044,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0030,0x0030,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0018,0x0010,0x0010,0x0010,0x0010,0x0010,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x007C,0x0040,0x0038,0x0040,0x0040,0x003C,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x003C,0x0040,0x0040,0x0030,0x0008,0x007C,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x01FE,0x01FE,0x01FE,0x01FE,0x01FE,0x01FE,0x01FE,0x01FE,0x0000,0x0000,0x0000},
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}
};

