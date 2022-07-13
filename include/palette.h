/*const u16 palette_normal[] = {
	RGB8(0x40,0x80,0xc0),
	RGB8(0x40,0x80,0xc0),
	RGB8(0xF5,0xFF,0xFF),
	RGB8(0xDF,0xFF,0xF2),
	RGB8(0xCA,0xFF,0xE2),
	RGB8(0xB7,0xFD,0xD8),
	RGB8(0x2C,0x4F,0x8B)
};

const u16 palette_highlight1[] = {
	RGB8(0x40,0x00,0x00),
	RGB8(0xFF,0xFF,0xc0),
	RGB8(0xFF,0xFF,0xA0),
	RGB8(0xFF,0xFF,0x80),
	RGB8(0xFF,0xFF,0x50),
	RGB8(0xDF,0xDF,0x10),
	RGB8(0xDD,0x10,0x10)
};

const u16 palette_highlight2[] = {
	RGB8(0x40,0x00,0x00),
	RGB8(0xFF,0x6F,0xc0),
	RGB8(0xFF,0x6F,0xA0),
	RGB8(0xFF,0x4F,0x80),
	RGB8(0xFF,0x4F,0x50),
	RGB8(0xDF,0x2F,0x10),
	RGB8(0xDD,0x10,0x10)
	};

const u16 palette_highlight3[] = {
	RGB8(0x20,0x20,0x20),
	RGB8(0x30,0x30,0x30),
	RGB8(0x20,0x20,0x20),
	RGB8(0x10,0x10,0x10),
	RGB8(0x10,0x10,0x10),
	RGB8(0x05,0x05,0x05),
	RGB8(0x70,0x00,0x00)
};
*/

const u16 palettes[3][4][7] = {
{
	{					  // - PALETTE 1
	RGB8(0x01,0x01,0x51), //background
	RGB8(0x01,0x01,0x51), //tile background
	RGB8(0xc1,0xc1,0xc1), //bout du texte
	RGB8(0xc1,0xc1,0xc1), //bout du texte
	RGB8(0xc1,0xc1,0xc1), //bout du texte
	RGB8(0xc1,0xc1,0xc1), //bout du texte
	RGB8(0x2C,0x4F,0x8B)  //shadow

	// RGB8(0x40,0x80,0xc0),
	// RGB8(0x40,0x80,0xc0),
	// RGB8(0xFF,0xFF,0xA0),
	// RGB8(0xFF,0xFF,0x80),
	// RGB8(0xFF,0xFF,0x50),
	// RGB8(0xDF,0xDF,0x10),
	// RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x40,0x80,0xc0),
	RGB8(0x40,0x80,0xc0),
	RGB8(0xFF,0xFF,0xA0),
	RGB8(0xFF,0xFF,0x80),
	RGB8(0xFF,0xFF,0x50),
	RGB8(0xDF,0xDF,0x10),
	RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x40,0x00,0x00),
	RGB8(0xFF,0x6F,0xc0),
	RGB8(0xFF,0x6F,0xA0),
	RGB8(0xFF,0x4F,0x80),
	RGB8(0xFF,0x4F,0x50),
	RGB8(0xDF,0x2F,0x10),
	RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x40,0x80,0xc0),
	RGB8(0x40,0x80,0xc0),
	RGB8(0xFF,0xFF,0xA0),
	RGB8(0xFF,0xFF,0x80),
	RGB8(0xFF,0xFF,0x50),
	RGB8(0xDF,0xDF,0x10),
	RGB8(0xDD,0x10,0x10)
	}
},{
	{					//-------PALETTE 2
	RGB8(0x13,0x13,0x13),
	RGB8(0x13,0x13,0x13),
	RGB8(0xF5,0xFF,0xFF),
	RGB8(0xDF,0xFF,0xF2),
	RGB8(0xCA,0xFF,0xE2),
	RGB8(0xB7,0xFD,0xD8),
	RGB8(0x07,0x07,0x07)
	},{
	RGB8(0x13,0x13,0x13),
	RGB8(0x13,0x13,0x13),
	RGB8(0xFF,0xFF,0xA0),
	RGB8(0xFF,0xFF,0x80),
	RGB8(0xFF,0xFF,0x50),
	RGB8(0xDF,0xDF,0x10),
	RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x13,0x13,0x13),
	RGB8(0x13,0x13,0x13),
	RGB8(0xFF,0x6F,0xA0),
	RGB8(0xFF,0x4F,0x80),
	RGB8(0xFF,0x4F,0x50),
	RGB8(0xDF,0x2F,0x10),
	RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x20,0x20,0x20),
	RGB8(0x30,0x30,0x30),
	RGB8(0x20,0x20,0x20),
	RGB8(0x10,0x10,0x10),
	RGB8(0x10,0x10,0x10),
	RGB8(0x05,0x05,0x05),
	RGB8(0x70,0x00,0x00)
	}
	},{ 					//--------PALETTE 3
	{
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0x0E,0x0E,0x0E),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0xCF,0xCF,0xCF)
	},{
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0x0E,0x0E,0x0E),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0x0C,0x0C,0x0C),
	RGB8(0xDF,0x4F,0x4F)
	},{
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0xEF,0xEF,0xEF),
	RGB8(0xFF,0x6F,0xA0),
	RGB8(0xFF,0x4F,0x80),
	RGB8(0xFF,0x4F,0x50),
	RGB8(0xDF,0x2F,0x10),
	RGB8(0xDD,0x10,0x10)
	},{
	RGB8(0x20,0x20,0x20),
	RGB8(0x30,0x30,0x30),
	RGB8(0x20,0x20,0x20),
	RGB8(0x10,0x10,0x10),
	RGB8(0x10,0x10,0x10),
	RGB8(0x05,0x05,0x05),
	RGB8(0x70,0x00,0x00)
	}
	}	
} ;
