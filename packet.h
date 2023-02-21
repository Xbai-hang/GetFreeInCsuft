#pragma once
/* EAPOL Start �� 591 �ֽ� */
static const unsigned char start_packet[591] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x88, 0x8e, 0x01, 0x01, /* ........ */
	0x00, 0x00, 0xff, 0xff, 0x37, 0x77, 0x7f, 0xff, /* ....7w.. */
	0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xca, /* ........ */
	0xf7, 0x00, 0x80, 0x34, 0x8e, 0x34, 0xc1, 0xc3, /* ...4.4.. */
	0x1f, 0x00, 0x00, 0x13, 0x11, 0x38, 0x30, 0x32, /* .....802 */
	0x31, 0x78, 0x2e, 0x65, 0x78, 0x65, 0x00, 0x00, /* 1x.exe.. */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x63, 0x03, /* ......c. */
	0x00, 0x00, 0x00, 0x00, 0x13, 0x11, 0x01, 0xf7, /* ........ */
	0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, 0x17, 0x22, /* .(....." */
	0x35, 0x33, 0x38, 0x32, 0x33, 0x43, 0x46, 0x39, /* 53823CF9 */
	0x37, 0x30, 0x33, 0x31, 0x37, 0x37, 0x41, 0x36, /* 703177A6 */
	0x36, 0x45, 0x31, 0x42, 0x43, 0x43, 0x43, 0x43, /* 6E1BCCCC */
	0x43, 0x43, 0x43, 0x43, 0x33, 0x38, 0x38, 0x34, /* CCCC3884 */
	0x1a, 0x0c, 0x00, 0x00, 0x13, 0x11, 0x18, 0x06, /* ........ */
	0x00, 0x00, 0x00, 0x01, 0x1a, 0x0e, 0x00, 0x00, /* ........ */
	0x13, 0x11, 0x2d, 0x08, 0x00, 0x00, 0x00, 0x00, /* ..-..... */
	0x00, 0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, /* ........ */
	0x2f, 0x12, 0x53, 0x63, 0x2e, 0xb0, 0xbd, 0xf7, /* /.Sc.... */
	0x57, 0xc3, 0xd6, 0xf5, 0x1d, 0x86, 0x02, 0x00, /* W....... */
	0xf8, 0x2d, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* .-...... */
	0x35, 0x03, 0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, /* 5....... */
	0x11, 0x36, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, /* .6...... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, /* ........ */
	0x11, 0x38, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, /* .8...... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, /* ........ */
	0x11, 0x4e, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, /* .N...... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x1a, 0x88, 0x00, 0x00, 0x13, /* ........ */
	0x11, 0x4d, 0x82, 0x35, 0x33, 0x38, 0x32, 0x33, /* .M.53823 */
	0x63, 0x66, 0x39, 0x37, 0x30, 0x33, 0x31, 0x37, /* cf970317 */
	0x37, 0x61, 0x36, 0x36, 0x65, 0x31, 0x62, 0x35, /* 7a66e1b5 */
	0x33, 0x61, 0x65, 0x33, 0x39, 0x64, 0x31, 0x32, /* 3ae39d12 */
	0x64, 0x62, 0x66, 0x35, 0x65, 0x32, 0x33, 0x36, /* dbf5e236 */
	0x61, 0x64, 0x65, 0x36, 0x33, 0x61, 0x38, 0x37, /* ade63a87 */
	0x32, 0x34, 0x35, 0x31, 0x39, 0x62, 0x30, 0x32, /* 24519b02 */
	0x66, 0x31, 0x38, 0x37, 0x62, 0x39, 0x36, 0x32, /* f187b962 */
	0x30, 0x65, 0x36, 0x33, 0x64, 0x63, 0x63, 0x37, /* 0e63dcc7 */
	0x39, 0x30, 0x66, 0x32, 0x38, 0x31, 0x34, 0x37, /* 90f28147 */
	0x34, 0x38, 0x61, 0x34, 0x65, 0x63, 0x38, 0x35, /* 48a4ec85 */
	0x63, 0x39, 0x63, 0x30, 0x62, 0x32, 0x32, 0x32, /* c9c0b222 */
	0x65, 0x37, 0x64, 0x35, 0x32, 0x64, 0x34, 0x32, /* e7d52d42 */
	0x39, 0x30, 0x36, 0x35, 0x31, 0x38, 0x30, 0x33, /* 90651803 */
	0x38, 0x64, 0x31, 0x37, 0x61, 0x63, 0x64, 0x33, /* 8d17acd3 */
	0x65, 0x38, 0x30, 0x34, 0x32, 0x32, 0x31, 0x34, /* e8042214 */
	0x37, 0x66, 0x65, 0x1a, 0x28, 0x00, 0x00, 0x13, /* 7fe.(... */
	0x11, 0x39, 0x22, 0xbb, 0xa5, 0xc1, 0xaa, 0xcd, /* .9"..... */
	0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x1a, 0x48, 0x00, 0x00, 0x13, /* ....H... */
//	0x11, 0x54, 0x42, 0x53, 0x74, 0x61, 0x74, 0x69, /* .TBStati */
//	0x63, 0x3a, 0x41, 0x42, 0x34, 0x35, 0x41, 0x38, /* c:AB45A8 */
//	0x36, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 62...... */
	0x11, 0x54, 0x42, 0x4a, 0x52, 0x31, 0x30, 0x30, /* .TBStati */
	0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* c:AB45A8 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 62...... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, /* ........ */
	0x11, 0x62, 0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, /* .b...... */
	0x13, 0x11, 0x6b, 0x03, 0x00, 0x1a, 0x09, 0x00, /* ..k..... */
	0x00, 0x13, 0x11, 0x70, 0x03, 0x40, 0x1a, 0x1d, /* ...p.@.. */
	0x00, 0x00, 0x13, 0x11, 0x6f, 0x17, 0x52, 0x47, /* ....o.RG */
	0x2d, 0x53, 0x55, 0x20, 0x56, 0x34, 0x2e, 0x39, /* -SU V4.9 */
	0x39, 0x2e, 0x32, 0x30, 0x31, 0x33, 0x31, 0x32, /* 9.201312 */
	0x31, 0x33, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, /* 13...... */
	0x11, 0x79, 0x03, 0x02, 0x1a, 0x13, 0x00, 0x00, /* .y...... */
	0x13, 0x11, 0x76, 0x0d, 0x31, 0x31, 0x31, 0x2e, /* ..v.111. */
	0x38, 0x2e, 0x31, 0x34, 0x2e, 0x31, 0x38        /* 8.14.18 */
};

/* EAP Identity �� 604 �ֽ� */
static const unsigned char identify_packet[604] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x88, 0x8e, 0x01, 0x00, /* ........ */
	0x00, 0x0d, 0x02, 0x01, 0x00, 0x0d, 0x01, 0x30, /* .......0 */
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xff, /* 0000000. */
	0xff, 0x37, 0x77, 0x7f, 0xff, 0xff, 0xff, 0xff, /* .7w..... */
	0x00, 0x00, 0xff, 0xff, 0xca, 0xf7, 0x00, 0x80, /* ........ */
	0x34, 0x8e, 0x34, 0xc1, 0xc3, 0x1f, 0x00, 0x00, /* 4.4..... */
	0x13, 0x11, 0x38, 0x30, 0x32, 0x31, 0x78, 0x2e, /* ..8021x. */
	0x65, 0x78, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, /* exe..... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x04, 0x63, 0x03, 0x00, 0x00, 0x00, /* ...c.... */
	0x00, 0x13, 0x11, 0x01, 0xf7, 0x1a, 0x28, 0x00, /* ......(. */
	0x00, 0x13, 0x11, 0x17, 0x22, 0x35, 0x33, 0x38, /* ...."538 */
	0x32, 0x33, 0x43, 0x46, 0x39, 0x37, 0x30, 0x33, /* 23CF9703 */
	0x31, 0x37, 0x37, 0x41, 0x36, 0x36, 0x45, 0x31, /* 177A66E1 */
	0x42, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, /* BCCCCCCC */
	0x43, 0x33, 0x38, 0x38, 0x34, 0x1a, 0x0c, 0x00, /* C3884... */
	0x00, 0x13, 0x11, 0x18, 0x06, 0x00, 0x00, 0x00, /* ........ */
	0x01, 0x1a, 0x0e, 0x00, 0x00, 0x13, 0x11, 0x2d, /* .......- */
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, /* ........ */
	0x18, 0x00, 0x00, 0x13, 0x11, 0x2f, 0x12, 0x53, /* ...../.S */
	0x63, 0x2e, 0xb0, 0xbd, 0xf7, 0x57, 0xc3, 0xd6, /* c....W.. */
	0xf5, 0x1d, 0x86, 0x02, 0x00, 0xf8, 0x2d, 0x1a, /* ......-. */
	0x09, 0x00, 0x00, 0x13, 0x11, 0x35, 0x03, 0x00, /* .....5.. */
	0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x36, 0x12, /* ......6. */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x38, 0x12, /* ......8. */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x4e, 0x12, /* ......N. */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x1a, 0x88, 0x00, 0x00, 0x13, 0x11, 0x4d, 0x82, /* ......M. */
	0x39, 0x38, 0x37, 0x35, 0x38, 0x38, 0x39, 0x34, /* 98758894 */
	0x34, 0x61, 0x30, 0x34, 0x39, 0x66, 0x32, 0x64, /* 4a049f2d */
	0x64, 0x32, 0x34, 0x30, 0x32, 0x39, 0x63, 0x36, /* d24029c6 */
	0x38, 0x36, 0x32, 0x36, 0x38, 0x66, 0x32, 0x62, /* 86268f2b */
	0x38, 0x32, 0x35, 0x65, 0x62, 0x62, 0x62, 0x36, /* 825ebbb6 */
	0x61, 0x35, 0x63, 0x63, 0x36, 0x64, 0x31, 0x38, /* a5cc6d18 */
	0x39, 0x38, 0x37, 0x38, 0x32, 0x63, 0x30, 0x30, /* 98782c00 */
	0x30, 0x35, 0x64, 0x36, 0x65, 0x35, 0x35, 0x65, /* 05d6e55e */
	0x32, 0x30, 0x31, 0x39, 0x32, 0x35, 0x66, 0x33, /* 201925f3 */
	0x63, 0x34, 0x39, 0x33, 0x37, 0x65, 0x61, 0x33, /* c4937ea3 */
	0x61, 0x63, 0x37, 0x33, 0x34, 0x64, 0x35, 0x38, /* ac734d58 */
	0x32, 0x38, 0x37, 0x35, 0x31, 0x66, 0x62, 0x61, /* 28751fba */
	0x33, 0x64, 0x64, 0x61, 0x65, 0x37, 0x34, 0x32, /* 3ddae742 */
	0x36, 0x30, 0x32, 0x35, 0x33, 0x31, 0x39, 0x66, /* 6025319f */
	0x62, 0x33, 0x30, 0x62, 0x33, 0x36, 0x62, 0x34, /* b30b36b4 */
	0x35, 0x34, 0x66, 0x38, 0x64, 0x34, 0x36, 0x39, /* 54f8d469 */
	0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, 0x39, 0x22, /* .(....9" */
	0xbb, 0xa5, 0xc1, 0xaa, 0xcd, 0xf8, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x1a, 0x48, 0x00, 0x00, 0x13, 0x11, 0x54, 0x42, /* .H....TB */
	0x53, 0x74, 0x61, 0x74, 0x69, 0x63, 0x3a, 0x41, /* Static:A */
	0x42, 0x34, 0x35, 0x41, 0x38, 0x36, 0x32, 0x00, /* B45A862. */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x62, 0x03, /* ......b. */
	0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x6b, /* .......k */
	0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* ........ */
	0x70, 0x03, 0x40, 0x1a, 0x1d, 0x00, 0x00, 0x13, /* p.@..... */
	0x11, 0x6f, 0x17, 0x52, 0x47, 0x2d, 0x53, 0x55, /* .o.RG-SU */
	0x20, 0x56, 0x34, 0x2e, 0x39, 0x39, 0x2e, 0x32, /*  V4.99.2 */
	0x30, 0x31, 0x33, 0x31, 0x32, 0x31, 0x33, 0x00, /* 0131213. */
	0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x79, 0x03, /* ......y. */
	0x02, 0x1a, 0x13, 0x00, 0x00, 0x13, 0x11, 0x76, /* .......v */
	0x0d, 0x31, 0x31, 0x31, 0x2e, 0x38, 0x2e, 0x31, /* .111.8.1 */
	0x34, 0x2e, 0x31, 0x38                          /* 4.18 */
};

/* EAP MD5-Challenge �� 604 �ֽ� */
static const unsigned char md5challenge_packet[621] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x88, 0x8e, 0x01, 0x00, /* ........ */
	0x00, 0x1e, 0x02, 0x02, 0x00, 0x1e, 0x04, 0x10, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, /* 00000000 */
	0xff, 0xff, 0x37, 0x77, 0x7f, 0xff, 0xff, 0xff, /* ..7w.... */
	0xff, 0x00, 0x00, 0xff, 0xff, 0xca, 0xf7, 0x00, /* ........ */
	0x80, 0x34, 0x8e, 0x34, 0xc1, 0xc3, 0x1f, 0x00, /* .4.4.... */
	0x00, 0x13, 0x11, 0x38, 0x30, 0x32, 0x31, 0x78, /* ...8021x */
	0x2e, 0x65, 0x78, 0x65, 0x00, 0x00, 0x00, 0x00, /* .exe.... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x04, 0x63, 0x03, 0x00, 0x00, /* ....c... */
	0x00, 0x00, 0x13, 0x11, 0x01, 0xf7, 0x1a, 0x28, /* .......( */
	0x00, 0x00, 0x13, 0x11, 0x17, 0x22, 0x65, 0x62, /* ....."eb */
	0x31, 0x36, 0x66, 0x62, 0x31, 0x65, 0x63, 0x38, /* 16fb1ec8 */
	0x66, 0x32, 0x32, 0x64, 0x30, 0x31, 0x61, 0x63, /* f22d01ac */
	0x33, 0x39, 0x38, 0x38, 0x36, 0x66, 0x30, 0x66, /* 39886f0f */
	0x32, 0x62, 0x66, 0x30, 0x33, 0x64, 0x1a, 0x0c, /* 2bf03d.. */
	0x00, 0x00, 0x13, 0x11, 0x18, 0x06, 0x00, 0x00, /* ........ */
	0x00, 0x01, 0x1a, 0x0e, 0x00, 0x00, 0x13, 0x11, /* ........ */
	0x2d, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* -....... */
	0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x2f, 0x12, /* ....../. */
	0xbd, 0xb6, 0xc7, 0xfa, 0x5d, 0xd5, 0x90, 0xf2, /* ....]... */
	0x76, 0x7b, 0xb4, 0xdf, 0x6c, 0x09, 0xe6, 0x38, /* v{..l..8 */
	0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x35, 0x03, /* ......5. */
	0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x36, /* .......6 */
	0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x38, /* .......8 */
	0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x1a, 0x18, 0x00, 0x00, 0x13, 0x11, 0x4e, /* .......N */
	0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x1a, 0x88, 0x00, 0x00, 0x13, 0x11, 0x4d, /* .......M */
	0x82, 0x35, 0x61, 0x37, 0x35, 0x36, 0x66, 0x65, /* .5a756fe */
	0x62, 0x62, 0x37, 0x34, 0x35, 0x65, 0x32, 0x32, /* bb745e22 */
	0x63, 0x37, 0x31, 0x61, 0x34, 0x34, 0x33, 0x33, /* c71a4433 */
	0x63, 0x35, 0x63, 0x61, 0x39, 0x65, 0x35, 0x66, /* c5ca9e5f */
	0x65, 0x34, 0x61, 0x36, 0x39, 0x62, 0x33, 0x34, /* e4a69b34 */
	0x36, 0x34, 0x66, 0x34, 0x61, 0x63, 0x36, 0x62, /* 64f4ac6b */
	0x33, 0x32, 0x65, 0x34, 0x37, 0x30, 0x65, 0x35, /* 32e470e5 */
	0x39, 0x64, 0x62, 0x31, 0x32, 0x38, 0x65, 0x38, /* 9db128e8 */
	0x64, 0x38, 0x34, 0x30, 0x62, 0x37, 0x34, 0x32, /* d840b742 */
	0x66, 0x38, 0x30, 0x66, 0x34, 0x62, 0x38, 0x38, /* f80f4b88 */
	0x62, 0x36, 0x30, 0x39, 0x32, 0x38, 0x36, 0x63, /* b609286c */
	0x32, 0x63, 0x39, 0x34, 0x65, 0x39, 0x37, 0x62, /* 2c94e97b */
	0x32, 0x33, 0x38, 0x64, 0x61, 0x32, 0x66, 0x33, /* 238da2f3 */
	0x36, 0x63, 0x36, 0x66, 0x63, 0x38, 0x38, 0x31, /* 6c6fc881 */
	0x39, 0x39, 0x38, 0x63, 0x32, 0x38, 0x38, 0x66, /* 998c288f */
	0x65, 0x30, 0x61, 0x39, 0x61, 0x30, 0x37, 0x61, /* e0a9a07a */
	0x63, 0x1a, 0x28, 0x00, 0x00, 0x13, 0x11, 0x39, /* c.(....9 */
	0x22, 0xbb, 0xa5, 0xc1, 0xaa, 0xcd, 0xf8, 0x00, /* "....... */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x1a, 0x48, 0x00, 0x00, 0x13, 0x11, 0x54, /* ..H....T */
	0x42, 0x53, 0x74, 0x61, 0x74, 0x69, 0x63, 0x3a, /* BStatic: */
	0x41, 0x42, 0x34, 0x35, 0x41, 0x38, 0x36, 0x32, /* AB45A862 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
	0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x62, /* .......b */
	0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, /* ........ */
	0x6b, 0x03, 0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, /* k....... */
	0x11, 0x70, 0x03, 0x40, 0x1a, 0x1d, 0x00, 0x00, /* .p.@.... */
	0x13, 0x11, 0x6f, 0x17, 0x52, 0x47, 0x2d, 0x53, /* ..o.RG-S */
	0x55, 0x20, 0x56, 0x34, 0x2e, 0x39, 0x39, 0x2e, /* U V4.99. */
	0x32, 0x30, 0x31, 0x33, 0x31, 0x32, 0x31, 0x33, /* 20131213 */
	0x00, 0x1a, 0x09, 0x00, 0x00, 0x13, 0x11, 0x79, /* .......y */
	0x03, 0x02, 0x1a, 0x13, 0x00, 0x00, 0x13, 0x11, /* ........ */
	0x76, 0x0d, 0x31, 0x31, 0x31, 0x2e, 0x38, 0x2e, /* v.111.8. */
	0x31, 0x34, 0x2e, 0x31, 0x38                    /* 14.18 */
};