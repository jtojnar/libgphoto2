#ifndef __SPCA50X_AVI_HEADER_H
#define __SPCA50X_AVI_HEADER_H

#define SPCA50X_AVI_FRAME_HEADER_LENGTH	8
uint8_t SPCA50xAviFrameHeader[SPCA50X_AVI_FRAME_HEADER_LENGTH] = {   
	0x30, 0x30, 0x64, 0x63, // 00dc
	0x00, 0x00, 0x00, 0x00 // size of frame
};

#define SPCA50X_AVI_HEADER_LENGTH 224
uint8_t SPCA50xAviHeader[SPCA50X_AVI_HEADER_LENGTH] = {   
	/* -- RIFF HEADER -- */
	0x52, 0x49, 0x46, 0x46, // 0x00; RIFF  
	0x00, 0x00, 0x00, 0x00, // 0x04; number of bytes following
	0x41, 0x56, 0x49, 0x20, // 0x08; AVI
	0x4C, 0x49, 0x53, 0x54, // 0x0c; LIST
	0xC0, 0x00, 0x00, 0x00, // 0x10; length of list in bytes
	0x68, 0x64, 0x72, 0x6C, // 0x14; hdrl
	0x61, 0x76, 0x69, 0x68, // 0x18; avih
	0x38, 0x00, 0x00, 0x00, // 0x1c; number of bytes to follow
	0xb5, 0x8c, 0x01, 0x00, // 0x20; microseconds per frame
	0x00, 0x00, 0x06, 0x00, // 0x24; max bytes per second
	0x00, 0x00, 0x00, 0x00, // 0x28; PaddingGranularity (whatever that might be)
	                        // Other sources call it 'reserved'
	0x10, 0x00, 0x01, 0x00, // 0x2c; flags, WASCAPTUREFILE | HASINDEX
	0x00, 0x00, 0x00, 0x00, // 0x30; total frames
	0x00, 0x00, 0x00, 0x00, // 0x34: initial frames
	0x01, 0x00, 0x00, 0x00, // 0x38: number of streams
	0x00, 0x00, 0x00, 0x00, // 0x3c: suggested buffer size
	0x40, 0x01, 0x00, 0x00, // 0x40: width
	0xf0, 0x00, 0x00, 0x00, // 0x44: height
	0x00, 0x00, 0x00, 0x00, // 0x48: some reserved long values
	0x00, 0x00, 0x00, 0x00, // 0x4c:
	0x00, 0x00, 0x00, 0x00, // 0x50:
	0x00, 0x00, 0x00, 0x00, // 0x54:
	/* -- video stream list -- */
	0x4C, 0x49, 0x53, 0x54, // 0x58: LIST
	0x74, 0x00, 0x00, 0x00, // 0x5c: length of list in bytes
	0x73, 0x74, 0x72, 0x6C, // 0x60: strl
	/* -- video stream header -- */
	0x73, 0x74, 0x72, 0x68, // 0x64: strh
	0x38, 0x00, 0x00, 0x00, // 0x68: # of bytes to follow
	0x76, 0x69, 0x64, 0x73, // 0x6c: vids
	0x4D, 0x4A, 0x50, 0x47, // 0x70: MJPG
	0x00, 0x00, 0x00, 0x00, // 0x74: some more reserved longs
	0x00, 0x00, 0x00, 0x00, // 0x78:
	0x00, 0x00, 0x00, 0x00, // 0x7c:
	0x33, 0x18, 0x00, 0x00, // 0x80: ms_per_frame scale
	0x48, 0xEE, 0x00, 0x00, // 0x84: Rate: Rate/Scale == samples/second 
	0x00, 0x00, 0x00, 0x00, // 0x88: start
	0x00, 0x00, 0x00, 0x00, // 0x8c: length (video_frames)
	0x00, 0x00, 0x00, 0x00, // 0x90: suggested buffer size
	0xFF, 0xFF, 0xFF, 0xFF, // 0x94: quality
	0x00, 0x00, 0x00, 0x00, // 0x98: sample size
	0x00, 0x00, 0x00, 0x00, // 0x9c: frame
	0x00, 0x00, 0x00, 0x00, // 0xa0: frame
	/* -- video stream format -- */
	0x73, 0x74, 0x72, 0x66, // 0xa4: strf
	0x28, 0x00, 0x00, 0x00, // 0xa8: number of bytes to follow (40)
	0x28, 0x00, 0x00, 0x00, // 0xac: size (dito)
	0x40, 0x01, 0x00, 0x00, // 0xb0: width
	0xf0, 0x00, 0x00, 0x00, // 0xb4: height
	0x01, 0x00, 0x0C, 0x00, // 0xb8: planes(1) : count(24)
	0x4D, 0x4A, 0x50, 0x47, // 0xbc: encoder MJPG
	0x00, 0xC2, 0x01, 0x00, // 0xc0: Size image
	0x00, 0x00, 0x00, 0x00, // 0xc4: XPelsPerMeter
	0x00, 0x00, 0x00, 0x00, // 0xc8: YPelsPerMeter
	0x00, 0x00, 0x00, 0x00, // 0xcc: Number of colors used
	0x00, 0x00, 0x00, 0x00, // 0xd0: Number of colors important
	/* do we have to pad with JUNK here ? */
	0x4C, 0x49, 0x53, 0x54, // 0xd4: LIST
	0x00, 0x00, 0x00, 0x00, // 0xd8: size of list
	0x6D, 0x6F, 0x76, 0x69  // 0xda: movi
};

#endif /* __SPCA50X_AVI_HEADER_H */
