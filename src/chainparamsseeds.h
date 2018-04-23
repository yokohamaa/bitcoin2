#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
* List of fixed seed nodes for the bitcoin network
* AUTOGENERATED by contrib/seeds/generate-seeds.py
*
* Each line contains a 16-byte IPv6 address and a port.
* IPv4 as well as onion addresses are wrapped inside an IPv6 address accordingly.
*/
static SeedSpec6 pnSeed6_main[] = {
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x45,0xc5,0xa7,0xfe }, 8333 },
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x76,0x88,0x03,0x94 }, 8333 },
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x12,0xdb,0x76,0x5e }, 8333 }
};

static SeedSpec6 pnSeed6_test[] = {
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x76,0x88,0x03,0x94 }, 49144 },
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x12,0xdb,0x76,0x5e }, 49144 },
	{ { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x45,0xc5,0xa7,0xfe }, 49144 }
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
