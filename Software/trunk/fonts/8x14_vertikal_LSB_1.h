const unsigned char PROGMEM font[256][16]={
{0x80,0x01,0xF0,0x0F,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0xF0,0x0F,0x80,0x01},	// 0x00   //00/ --> Resistor3 // {0x00,0x3E,0x45,0x51,0x45,0x3E},	// 0x00
{0xF8,0x1F,0xF0,0x0F,0xE0,0x07,0xC0,0x03,0x80,0x01,0xF8,0x1F,0xF8,0x1F,0x80,0x01},	// 0x01   //01/ --> Diode1
{0x80,0x01,0xF8,0x1F,0xF8,0x1F,0x80,0x01,0xC0,0x03,0xE0,0x07,0xF0,0x0F,0xF8,0x1F},	// 0x02   //02/ --> Diode2   // {0x00,0x3E,0x6B,0x6F,0x6B,0x3E},	// 0x02
{0x80,0x01,0xF8,0x1F,0xF8,0x1F,0x00,0x00,0x00,0x00,0xF8,0x1F,0xF8,0x1F,0x80,0x01},	// 0x03   //03/ --> Capacitance //{0x00,0x1C,0x3E,0x7C,0x3E,0x1C},	// 0x03
{0xC0,0x19,0xE0,0x1B,0x30,0x1E,0x30,0x00,0x30,0x1E,0xE0,0x1B,0xC0,0x19,0x00,0x00},	// 0x04   //04/ --> Omega    // {0x00,0x18,0x3C,0x7E,0x3C,0x18},	// 0x04
{0x00,0x40,0xF8,0x7F,0xF8,0x3F,0x00,0x08,0x00,0x10,0xE0,0x0F,0xE0,0x1F,0x00,0x18},	// 0x05   //05/ --> mu        // {0x00,0x30,0x36,0x7F,0x36,0x30},	// 0x05
{0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0xF0,0x0F,0xF0,0x0F,0x80,0x01},	// 0x06   //06/ --> Resistor1 // {0x00,0x18,0x5C,0x7E,0x5C,0x18},	// 0x06
{0x80,0x01,0xF0,0x0F,0xF0,0x0F,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C},	// 0x07   //07/ --> Resistor2 // {0x00,0x00,0x00,0x00,0x00,0x00},	// 0x07
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x08   //08/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x09   //09/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0A   //10/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0B   //11/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0C   //12/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0D   //13/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0E   //14/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0F   //15/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x10   //16/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x11   //17/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x12   //18/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x13   //19/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x14   //20/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x15   //21/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x16   //22/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x17   //23/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x18   //24/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x19   //25/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1A   //26/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1B   //27/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1C   //28/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1D   //29/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1E   //30/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x1F   //31/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x20   //32/ 
{0x00,0x00,0x00,0x00,0x78,0x00,0xFC,0x33,0xFC,0x33,0x78,0x00,0x00,0x00,0x00,0x00},	// 0x21   //33/ 
{0x00,0x00,0x0E,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x0E,0x00,0x00,0x00},	// 0x22   //34/ 
{0x20,0x02,0xF8,0x0F,0xF8,0x0F,0x20,0x02,0xF8,0x0F,0xF8,0x0F,0x20,0x02,0x00,0x00},	// 0x23   //35/ 
{0x70,0x0C,0xF8,0x1C,0x88,0x10,0x8E,0x70,0x8E,0x70,0x18,0x1F,0x30,0x0E,0x00,0x00},	// 0x24   //36/ 
{0x30,0x0C,0x30,0x06,0x00,0x03,0x80,0x01,0xC0,0x00,0x60,0x0C,0x30,0x0C,0x00,0x00},	// 0x25   //37/ 
{0x80,0x03,0xCC,0x07,0x7E,0x0C,0x62,0x0C,0x9C,0x06,0x00,0x03,0x80,0x02,0x00,0x00},	// 0x26   //38/ 
{0x00,0x00,0x10,0x00,0x1E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x27   //39/ 
{0x00,0x00,0x00,0x00,0xC0,0x03,0xF0,0x0F,0x18,0x18,0x0C,0x30,0x00,0x00,0x00,0x00},	// 0x28   //40/ 
{0x00,0x00,0x00,0x00,0x0C,0x30,0x18,0x18,0xF0,0x0F,0xC0,0x03,0x00,0x00,0x00,0x00},	// 0x29   //41/ 
{0x80,0x00,0xA0,0x02,0xE0,0x03,0xC0,0x01,0xC0,0x01,0xE0,0x03,0xA0,0x02,0x80,0x00},	// 0x2A   //42/ 
{0x00,0x00,0x80,0x01,0x80,0x01,0xE0,0x07,0xE0,0x07,0x80,0x01,0x80,0x01,0x00,0x00},	// 0x2B   //43/ 
{0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x3C,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x2C   //44/ 
{0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01},	// 0x2D   //45/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x2E   //46/ 
{0x00,0x0C,0x00,0x06,0x00,0x03,0x80,0x01,0xC0,0x00,0x60,0x00,0x30,0x00,0x00,0x00},	// 0x2F   //47/ 
{0xF0,0x07,0xF8,0x0F,0x0C,0x18,0x04,0x10,0x0C,0x18,0xF8,0x0F,0xF0,0x07,0x00,0x00},	// 0x30   //48/ 
{0x00,0x00,0x10,0x10,0x18,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x00,0x10,0x00,0x00},	// 0x31   //49/ 
{0x18,0x1C,0x1C,0x1E,0x04,0x13,0x84,0x11,0xC4,0x10,0x7C,0x18,0x38,0x18,0x00,0x00},	// 0x32   //50/ 
{0x08,0x08,0x0C,0x18,0x84,0x10,0x84,0x10,0x84,0x10,0xFC,0x1F,0x78,0x0F,0x00,0x00},	// 0x33   //51/ 
{0x80,0x01,0xC0,0x01,0x60,0x01,0x30,0x11,0xF8,0x1F,0xFC,0x1F,0x00,0x11,0x00,0x00},	// 0x34   //52/ 
{0x7C,0x08,0x7C,0x18,0x44,0x10,0x44,0x10,0x44,0x10,0xC4,0x1F,0x84,0x0F,0x00,0x00},	// 0x35   //53/ 
{0xF0,0x0F,0xF8,0x1F,0x4C,0x10,0x44,0x10,0x44,0x10,0xC0,0x1F,0x80,0x0F,0x00,0x00},	// 0x36   //54/ 
{0x0C,0x00,0x0C,0x00,0x04,0x1F,0x84,0x1F,0xC4,0x00,0x7C,0x00,0x3C,0x00,0x00,0x00},	// 0x37   //55/ 
{0xB8,0x0F,0xFC,0x1F,0x44,0x10,0x44,0x10,0x44,0x10,0xFC,0x1F,0xB8,0x0F,0x00,0x00},	// 0x38   //56/ 
{0x78,0x00,0xFC,0x10,0x84,0x10,0x84,0x10,0x84,0x18,0xFC,0x0F,0xF8,0x07,0x00,0x00},	// 0x39   //57/ 
{0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x0C,0x60,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x3A   //58/ 
{0x00,0x00,0x00,0x00,0x00,0x20,0x60,0x3C,0x60,0x1C,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x3B   //59/ 
{0x00,0x00,0x80,0x00,0xC0,0x01,0x60,0x03,0x30,0x06,0x18,0x0C,0x08,0x08,0x00,0x00},	// 0x3C   //60/ 
{0x00,0x00,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x00,0x00},	// 0x3D   //61/ 
{0x00,0x00,0x08,0x08,0x18,0x0C,0x30,0x06,0x60,0x03,0xC0,0x01,0x80,0x00,0x00,0x00},	// 0x3E   //62/ 
{0x00,0x00,0x18,0x00,0x1C,0x00,0x84,0x1B,0xC4,0x1B,0x7C,0x00,0x38,0x00,0x00,0x00},	// 0x3F   //63/ 
{0xF0,0x07,0x08,0x08,0xC4,0x13,0x24,0x13,0xE4,0x11,0x08,0x03,0xF0,0x01,0x00,0x00},	// 0x40   //64/ 
{0xE0,0x1F,0xF0,0x1F,0x18,0x02,0x0C,0x02,0x04,0x02,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0x41   //65/ A
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x84,0x10,0x84,0x10,0xFC,0x1F,0x78,0x0F,0x00,0x00},	// 0x42   //66/ B
{0xF0,0x07,0xF8,0x0F,0x0C,0x18,0x04,0x10,0x04,0x10,0x08,0x18,0x3C,0x0C,0x00,0x00},	// 0x43   //67/ C
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x0C,0x18,0xF8,0x0F,0xF0,0x07,0x00,0x00},	// 0x44   //68/ D
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x84,0x10,0xE4,0x13,0x04,0x10,0x1C,0x1C,0x00,0x00},	// 0x45   //69/ E
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x84,0x10,0xE4,0x03,0x0C,0x00,0x3C,0x00,0x00,0x00},	// 0x46   //70/ F
{0xF0,0x07,0xF8,0x0F,0x0C,0x18,0x04,0x10,0x04,0x11,0x08,0x0F,0x3C,0x1F,0x00,0x01},	// 0x47   //71/ G
{0xFC,0x1F,0xFC,0x1F,0x80,0x00,0x80,0x00,0x80,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0x48   //72/ H
{0x00,0x00,0x00,0x00,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x00,0x00,0x00,0x00},	// 0x49   //73/ I
{0x00,0x0C,0x00,0x1C,0x00,0x10,0x04,0x10,0xFC,0x1F,0xFC,0x0F,0x04,0x00,0x00,0x00},	// 0x4A   //74/ J
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0xC0,0x00,0xB8,0x03,0x04,0x1F,0x0C,0x1C,0x00,0x00},	// 0x4B   //75/ K
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x00,0x10,0x00,0x18,0x00,0x1E,0x00,0x00},	// 0x4C   //76/ L
{0xFC,0x1F,0xF8,0x1F,0x60,0x00,0x80,0x03,0x60,0x00,0xF8,0x1F,0xFC,0x1F,0x00,0x00},	// 0x4D   //77/ M
{0xFC,0x1F,0xFC,0x1F,0x70,0x00,0xC0,0x01,0x00,0x07,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0x4E   //78/ N
{0xF0,0x07,0xF8,0x0F,0x0C,0x18,0x04,0x10,0x0C,0x18,0xF8,0x0F,0xF0,0x07,0x00,0x00},	// 0x4F   //79/ O
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x84,0x10,0x84,0x00,0xFC,0x00,0x78,0x00,0x00,0x00},	// 0x50   //80/ P
{0xF0,0x07,0xF8,0x0F,0x0C,0x18,0x04,0x12,0x0C,0x14,0xF8,0x0B,0xF0,0x17,0x00,0x00},	// 0x51   //81/ Q
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x11,0x04,0x03,0xFC,0x1F,0xF8,0x1C,0x00,0x00},	// 0x52   //82/ R
{0x38,0x1E,0x7C,0x08,0x44,0x10,0xC4,0x10,0x84,0x10,0x88,0x1F,0x1C,0x0F,0x00,0x00},	// 0x53   //83/ S
{0x00,0x00,0x3C,0x00,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x3C,0x00,0x00,0x00},	// 0x54   //84/ T
{0xFC,0x0F,0xFC,0x1F,0x00,0x10,0x00,0x10,0x00,0x10,0xFC,0x1F,0xFC,0x0F,0x00,0x00},	// 0x55   //85/ U
{0xFC,0x03,0xFC,0x07,0x00,0x0C,0x00,0x18,0x00,0x0C,0xFC,0x07,0xFC,0x03,0x00,0x00},	// 0x56   //86/ V
{0xFC,0x07,0xFC,0x1F,0x00,0x18,0x00,0x0E,0x00,0x18,0xFC,0x1F,0xFC,0x07,0x00,0x00},	// 0x57   //87/ W
{0x0C,0x18,0x3C,0x1E,0xF0,0x07,0xC0,0x01,0xF0,0x07,0x3C,0x1E,0x0C,0x18,0x00,0x00},	// 0x58   //88/ X
{0x00,0x00,0x7C,0x00,0xFC,0x00,0x80,0x1F,0x80,0x1F,0xFC,0x00,0x7C,0x00,0x00,0x00},	// 0x59   //89/ Y
{0x3C,0x1E,0x0C,0x1F,0x84,0x11,0xC4,0x10,0x64,0x10,0x3C,0x18,0x1C,0x1E,0x00,0x00},	// 0x5A   //90/ Z
{0x00,0x00,0x00,0x00,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x04,0x10,0x00,0x00,0x00,0x00},	// 0x5B   //91/ 
{0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x00,0x07,0x00,0x0E,0x00,0x1C},	// 0x5C   //92/ 
{0x00,0x00,0x00,0x00,0x04,0x10,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x00,0x00,0x00},	// 0x5D   //93/ 
{0x08,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x06,0x00,0x0C,0x00,0x08,0x00,0x00,0x00},	// 0x5E   //94/ 
{0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20},	// 0x5F   //95/ 
{0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x60   //96/ 
{0x00,0x0F,0xA0,0x1F,0xA0,0x10,0xA0,0x10,0xE0,0x0F,0xC0,0x1F,0x00,0x10,0x00,0x00},	// 0x61   //97/ a
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x20,0x10,0x20,0x10,0xE0,0x1F,0xC0,0x0F,0x00,0x00},	// 0x62   //98/ b
{0x80,0x07,0xC0,0x0F,0x60,0x18,0x20,0x10,0x20,0x10,0x60,0x18,0x40,0x0C,0x00,0x00},	// 0x63   //99/ c
{0xC0,0x0F,0xE0,0x1F,0x20,0x10,0x24,0x10,0xFC,0x0F,0xFC,0x1F,0x00,0x10,0x00,0x00},	// 0x64   //100/ d
{0x80,0x07,0xC0,0x0F,0x60,0x19,0x20,0x11,0x60,0x11,0xC0,0x19,0x80,0x09,0x00,0x00},	// 0x65   //101/ e
{0x40,0x10,0xF8,0x1F,0xFC,0x1F,0x44,0x10,0x4C,0x00,0x18,0x00,0x00,0x00,0x00,0x00},	// 0x66   //102/ f
{0xC0,0x27,0xE0,0x6F,0x20,0x48,0x20,0x48,0xC0,0x7F,0xE0,0x3F,0x20,0x00,0x00,0x00},	// 0x67   //103/ g
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x40,0x00,0x20,0x00,0xE0,0x1F,0xC0,0x1F,0x00,0x00},	// 0x68   //104/ h
{0x00,0x00,0x00,0x00,0x20,0x10,0xEC,0x1F,0xEC,0x1F,0x00,0x10,0x00,0x00,0x00,0x00},	// 0x69   //105/ i
{0x00,0x00,0x00,0x30,0x00,0x70,0x00,0x40,0x20,0x40,0xEC,0x7F,0xEC,0x3F,0x00,0x00},	// 0x6A   //106/ j
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x80,0x01,0xC0,0x03,0x60,0x1E,0x20,0x1C,0x00,0x00},	// 0x6B   //107/ k
{0x00,0x00,0x00,0x00,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x10,0x00,0x00,0x00,0x00},	// 0x6C   //108/ l
{0xE0,0x1F,0xC0,0x1F,0x20,0x00,0xC0,0x0F,0x60,0x00,0xE0,0x1F,0xC0,0x1F,0x00,0x00},	// 0x6D   //109/ m
{0x20,0x10,0xE0,0x1F,0xC0,0x1F,0x20,0x00,0x20,0x00,0xE0,0x1F,0xC0,0x1F,0x00,0x00},	// 0x6E   //110/ n
{0x80,0x07,0xC0,0x0F,0x60,0x18,0x20,0x10,0x60,0x18,0xC0,0x0F,0x80,0x07,0x00,0x00},	// 0x6F   //111/ o
{0x20,0x40,0xE0,0x7F,0xC0,0x7F,0x20,0x50,0x20,0x10,0xE0,0x1F,0xC0,0x0F,0x00,0x00},	// 0x70   //112/ p
{0xC0,0x0F,0xE0,0x1F,0x20,0x10,0x20,0x50,0xC0,0x7F,0xE0,0x7F,0x00,0x40,0x00,0x00},	// 0x71   //113/ q
{0x20,0x10,0xE0,0x1F,0xC0,0x1F,0x60,0x10,0x20,0x00,0xE0,0x00,0xC0,0x00,0x00,0x00},	// 0x72   //114/ r
{0x40,0x0C,0xE0,0x1C,0xA0,0x11,0x20,0x11,0x20,0x13,0x60,0x1E,0x40,0x0C,0x00,0x00},	// 0x73   //115/ s
{0x20,0x00,0x20,0x00,0xF8,0x0F,0xFC,0x1F,0x20,0x10,0x20,0x18,0x00,0x0C,0x00,0x00},	// 0x74   //116/ t
{0xE0,0x0F,0xE0,0x1F,0x00,0x10,0x00,0x10,0xE0,0x0F,0xE0,0x1F,0x00,0x10,0x00,0x00},	// 0x75   //117/ u
{0x00,0x00,0xE0,0x07,0xE0,0x0F,0x00,0x18,0x00,0x18,0xE0,0x0F,0xE0,0x07,0x00,0x00},	// 0x76   //118/ v
{0xE0,0x07,0xE0,0x0F,0x00,0x1C,0x80,0x07,0x00,0x1C,0xE0,0x0F,0xE0,0x07,0x00,0x00},	// 0x77   //119/ w
{0x60,0x18,0xE0,0x1C,0x80,0x07,0x00,0x03,0x80,0x07,0xE0,0x1C,0x60,0x18,0x00,0x00},	// 0x78   //120/ x
{0xE0,0x27,0xE0,0x6F,0x00,0x48,0x00,0x48,0xE0,0x7F,0xE0,0x3F,0x00,0x00,0x00,0x00},	// 0x79   //121/ y
{0x60,0x1C,0x60,0x1E,0x20,0x13,0xA0,0x11,0xE0,0x10,0x60,0x18,0x20,0x1C,0x00,0x00},	// 0x7A   //122/ z
{0x00,0x00,0x80,0x00,0x80,0x00,0xF8,0x0F,0x7C,0x1F,0x04,0x10,0x04,0x10,0x00,0x00},	// 0x7B   //123/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x7C   //124/
{0x00,0x00,0x04,0x10,0x04,0x10,0x7C,0x1F,0xF8,0x0F,0x80,0x00,0x80,0x00,0x00,0x00},	// 0x7D   //125/
{0x08,0x00,0x0C,0x00,0x04,0x00,0x0C,0x00,0x08,0x00,0x0C,0x00,0x04,0x00,0x00,0x00},	// 0x7E   //126/
{0x80,0x07,0xC0,0x07,0x60,0x04,0x30,0x04,0x60,0x04,0xC0,0x07,0x80,0x07,0x00,0x00},	// 0x7F   //127/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x80   //128/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x81   //129/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x82   //130/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x83   //131/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x84   //132/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x85   //133/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x86   //134/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x87   //135/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x88   //136/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x89   //137/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8A   //138/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8B   //139/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8C   //140/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8D   //141/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8E   //142/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x8F   //143/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x90   //144/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x91   //145/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x92   //146/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x93   //147/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x94   //148/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x95   //149/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x96   //150/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x97   //151/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x98   //152/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x99   //153/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9A   //154/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9B   //155/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9C   //156/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9D   //157/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9E   //158/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x9F   //159/
#ifndef LCD_CYRILLIC                                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xA9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAD   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAF   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBD   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBF   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCD   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCF   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDD   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDF   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xED   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEF   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF0   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF1   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF2   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF3   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF4   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF5   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF6   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF7   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF8   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF9   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFA   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFB   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFC   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFD   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFE   
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	// 0xFF   
#else
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x44,0x10,0x44,0x10,0xCC,0x1F,0x9C,0x0F,0x00,0x00},	// 0xA0   //160/ �
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x04,0x10,0x04,0x00,0x0C,0x00,0x3C,0x00,0x00,0x00},	// 0xA1   //161/ �
{0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x84,0x10,0xE4,0x13,0x0C,0x18,0x1C,0x1C,0x00,0x00},	// 0xA2   //162/ �
{0x0C,0x18,0xFC,0x1F,0xC0,0x00,0xFC,0x1F,0xC0,0x00,0xFC,0x1F,0x0C,0x18,0x00,0x00},	// 0xA3   //163/ �
{0x08,0x08,0x0C,0x18,0x84,0x10,0x84,0x10,0x84,0x10,0xFC,0x1F,0x78,0x0F,0x00,0x00},	// 0xA4   //164/ �
{0xFC,0x1F,0xFC,0x1F,0x00,0x07,0xC0,0x01,0x70,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0xA5   //165/ �
{0xFC,0x1F,0xFC,0x1F,0x01,0x07,0xC3,0x01,0x71,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0xA6   //166/ �
{0x00,0x18,0x04,0x18,0xFC,0x0F,0x04,0x00,0x04,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0xA7   //167/ �
{0xFC,0x1F,0xFC,0x1F,0x04,0x00,0x04,0x00,0x04,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0xA8   //168/ �
{0xFC,0x00,0xFC,0x09,0x00,0x19,0x00,0x11,0x00,0x11,0xFC,0x1F,0xFC,0x0F,0x00,0x00},	// 0xA9   //169/ �
{0xF0,0x01,0xF8,0x03,0x0A,0x12,0xFE,0x1F,0xFE,0x1F,0x0A,0x12,0xF8,0x03,0xF0,0x01},	// 0xAA   //170/ �
{0xFC,0x00,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xFC,0x1F,0xFC,0x1F,0x00,0x00},	// 0xAB   //171/ �
{0xFC,0x1F,0xFC,0x1F,0x00,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x10,0xFC,0x1F,0xFC,0x1F},	// 0xAC   //172/ �
{0x0C,0x00,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x44,0x10,0xC0,0x1F,0x80,0x0F,0x00,0x00},	// 0xAD   //173/ �
{0xFC,0x1F,0xFC,0x1F,0x40,0x10,0xC0,0x1F,0x80,0x0F,0x00,0x00,0xFC,0x1F,0xFC,0x1F},	// 0xAE   //174/ �
{0x3C,0x0C,0x08,0x18,0x04,0x10,0xE4,0x13,0x8C,0x18,0xF8,0x0F,0xF0,0x07,0x00,0x00},	// 0xAF   //175/ �
{0xFC,0x1F,0xFC,0x1F,0x80,0x00,0xF8,0x0F,0xFC,0x1F,0x04,0x10,0xFC,0x1F,0xF8,0x0F},	// 0xB0   //176/ �
{0x00,0x10,0xF8,0x1C,0xFC,0x0F,0x04,0x03,0x04,0x11,0xFC,0x1F,0xFC,0x1F,0x04,0x10},	// 0xB1   //177/ �
{0x00,0x00,0xF0,0x0F,0xF8,0x1F,0x48,0x10,0x48,0x10,0xCC,0x1F,0x86,0x0F,0x00,0x00},	// 0xB2   //178/ �
{0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x20,0x11,0x20,0x11,0xE0,0x1F,0xC0,0x0E,0x00,0x00},	// 0xB3   //179/ �
{0x00,0x00,0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x20,0x10,0x20,0x00,0xE0,0x00,0x00,0x00},	// 0xB4   //180/ �
{0x80,0x07,0xCC,0x0F,0x6C,0x19,0x20,0x11,0x6C,0x11,0xCC,0x19,0x80,0x09,0x00,0x00},	// 0xB5   //181/ �
{0x60,0x18,0xE0,0x1F,0x00,0x01,0xE0,0x1F,0x00,0x01,0xE0,0x1F,0x60,0x18,0x00,0x00},	// 0xB6   //182/ �
{0x00,0x00,0x40,0x08,0x60,0x18,0x20,0x10,0x20,0x11,0xE0,0x1F,0xC0,0x0E,0x00,0x00},	// 0xB7   //183/ �
{0xE0,0x1F,0xE0,0x1F,0x00,0x06,0x00,0x03,0x80,0x01,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xB8   //184/ �
{0xE0,0x1F,0xE4,0x1F,0x0C,0x06,0x08,0x03,0x8C,0x01,0xE4,0x1F,0xE0,0x1F,0x00,0x00},	// 0xB9   //185/ �
{0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x00,0x01,0xC0,0x03,0x20,0x1E,0x60,0x18,0x00,0x00},	// 0xBA   //186/ �
{0x00,0x10,0x80,0x1F,0xC0,0x1F,0x60,0x00,0x20,0x00,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xBB   //187/ �
{0xE0,0x1F,0xE0,0x1F,0x80,0x01,0x00,0x0F,0x80,0x01,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xBC   //188/ �
{0xE0,0x1F,0xE0,0x1F,0x00,0x01,0x00,0x01,0x00,0x01,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xBD   //189/ �
{0xE0,0x1F,0xE0,0x1F,0x20,0x00,0x20,0x00,0x20,0x00,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xBE   //190/ �
{0x00,0x00,0xE0,0x00,0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x20,0x10,0xE0,0x00,0x00,0x00},	// 0xBF   //191/ �
{0xE0,0x01,0xE0,0x03,0x00,0x02,0x00,0x02,0xE0,0x1F,0xE0,0x1F,0x00,0x00,0x00,0x00},	// 0xC0   //192/ � 
{0xE0,0x1F,0xE0,0x1F,0x00,0x10,0xE0,0x1F,0x00,0x10,0xE0,0x1F,0xE0,0x1F,0x00,0x00},	// 0xC1   //193/ � 
{0x60,0x00,0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x20,0x11,0x00,0x1F,0x00,0x0E,0x00,0x00},	// 0xC2   //194/ � 
{0xE0,0x1F,0xE0,0x1F,0x00,0x11,0x00,0x1F,0x00,0x0E,0xE0,0x11,0xE0,0x1F,0x00,0x00},	// 0xC3   //195/ � 
{0x20,0x10,0xE0,0x1F,0xE0,0x1F,0x20,0x11,0x00,0x11,0x00,0x1F,0x00,0x0E,0x00,0x00},	// 0xC4   //196/ � 
{0x00,0x00,0x40,0x08,0x60,0x18,0x20,0x11,0x60,0x19,0xC0,0x0F,0x80,0x07,0x00,0x00},	// 0xC5   //197/ � 
{0xE0,0x1F,0xE0,0x1F,0x00,0x02,0xC0,0x0F,0xE0,0x1F,0x20,0x10,0xE0,0x1F,0xC0,0x0F},	// 0xC6   //198/ � 
{0xC0,0x11,0xE0,0x1B,0x20,0x0E,0x20,0x02,0xE0,0x1F,0xE0,0x1F,0x20,0x10,0x00,0x00},	// 0xC7   //199/ �
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC8   //200/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xC9   //201/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCA   //202/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCB   //203/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCC   //204/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCD   //205/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCE   //206/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xCF   //207/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD0   //208/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD1   //209/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD2   //210/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD3   //211/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD4   //212/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD5   //213/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD6   //214/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD7   //215/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD8   //216/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD9   //217/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDA   //218/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDB   //219/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDC   //220/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDD   //221/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDE   //222/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDF   //223/  
{0x00,0x70,0x04,0x18,0xFC,0x17,0x04,0x10,0x04,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x70},	// 0xE0   //224/ �
{0xFC,0x1F,0xFC,0x1F,0x00,0x10,0x00,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x70,0x00,0x00},	// 0xE1   //225/ �
{0xFC,0x1F,0xFC,0x1F,0x00,0x10,0xFC,0x1F,0xFC,0x1F,0x00,0x10,0xFC,0x3F,0xFC,0x7F},	// 0xE2   //226/ �
{0x00,0x70,0x00,0x3F,0xC0,0x1F,0x60,0x10,0x20,0x10,0xE0,0x1F,0xE0,0x3F,0x00,0x70},	// 0xE3   //227/ �
{0x00,0x0F,0x80,0x1F,0xA0,0x50,0xE0,0x7F,0xE0,0x7F,0xA0,0x50,0x80,0x1F,0x00,0x0F},	// 0xE4   //228/ �
{0xE0,0x1F,0xE0,0x1F,0x00,0x10,0x00,0x10,0xE0,0x1F,0xE0,0x1F,0x00,0x70,0x00,0x00},	// 0xE5   //229/ �
{0xE0,0x1F,0xE0,0x1F,0x00,0x10,0xE0,0x1F,0x00,0x10,0xE0,0x1F,0xE0,0x3F,0x00,0x70},	// 0xE6   //230/ �
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE7   //231/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE8   //232/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xE9   //233/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEA   //234/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEB   //235/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEC   //236/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xED   //237/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEE   //238/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEF   //239/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF0   //240/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF1   //241/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF2   //242/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF3   //243/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF4   //244/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF5   //245/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF6   //246/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF7   //247/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF8   //248/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF9   //249/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFA   //250/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFB   //251/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFC   //252/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFD   //253/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFE   //254/  
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFF   //255/  
#endif                                          
};
                                                