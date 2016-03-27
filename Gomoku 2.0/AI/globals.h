#ifndef globals_h
#define globals_h

#define MAX_DEPTH 5
#define INF (1e301L)
#define TABLE_SIZE 10000007
#define BOARD_SIZE 15
#define BLANK 0
#define WHITE 1
#define BLACK 2

const int MAXN = (BOARD_SIZE * BOARD_SIZE << 1);

typedef unsigned long long ull;
typedef unsigned short us;
typedef unsigned int ui;

int dx[] = {1, 0, 1, 1, -1, 0, -1, -1};
int dy[] = {0, 1, 1, -1, 0, -1, -1, 1};

ull hash_rand[15][15][3] = {
    {
        {0x3ee47ff35b942b8c, 0x2f93bc5f095f40, 0x91a54bbf6218f28, },
        {0x2f80cfdf288812a4, 0xbacbc8191378c2, 0x75cd70c647f57d4, },
        {0x6428d5d84f61b18, 0x372df2ddfca46042, 0xf017c8e448f5dc4, },
        {0x58fa564f1f55546, 0x25a7ce9198b43100, 0x30a425ebf79b4ec, },
        {0x53ecd207768d340, 0xa422c58a6f50b0, 0x4baa63ea7eb8d7a, },
        {0xe62d8a58b91b907, 0x185c3f553e3f4e45, 0x1017a0617ef17a02, },
        {0x16cd3a1d0cfd918, 0x7911c67906e0ed6, 0x1d2767a55f5bd5f0, },
        {0x16659792d421d90, 0x16ef047ed0e8683d, 0x7167ec5941d4460, },
        {0x1fa4268643b28640, 0x1375334ff2330620, 0xf0d9b8ad41c87c, },
        {0x1f641e9529fb2088, 0x497b9a4c940f60, 0x62fe22a7389d389, },
        {0x10b4c4c84e7fd807, 0x10c9849d151e1f57, 0x20f39908b7be7e34, },
        {0x4ff531f8b1c40b0, 0x2127a80a7ceddca, 0x1c3fbbb3123b420, },
        {0xe5cfbc27f85e9c4, 0x139c727d0af68ae3, 0x15d0cee9b6ead1c, },
        {0xb7b5f160151a488, 0x2ea19cd2467525a4, 0x48036b51c8ca4ec, },
        {0x21904d65b09a65c, 0x398ffc83ec96f30e, 0x4836682a7d68506, },
    },
    {
        {0xd5e041e1acd9a40, 0x43c49207f9b725d, 0x1ace21a30c70c8b2, },
        {0x546c75c9bf8ba68, 0x32682373ae86952, 0x456b7c2239fac7, },
        {0xb70c22f80c2af64, 0x2d979706176af21, 0x19bae93c47126bee, },
        {0x18ea527bd462af66, 0xb6e492d98f90920, 0xf7da23d44c09d18, },
        {0x1af08f0cd5a4fa, 0x15a75cf7e74521b0, 0x2ae495728901f4fd, },
        {0xd04d2891c522857, 0x22ea1bb2aba1bd8, 0x2467598a8d94bce0, },
        {0x115cc79bc0914067, 0x8c94aba4f375b4c, 0x114380e859d84a0, },
        {0xabb607e8c82c668, 0xa4d359435478be2, 0x15faa95694f90a18, },
        {0x73321032bef35e4, 0x1cf590d01b041a80, 0x1d475f7e6ad4bca, },
        {0x24dfcd978c207ad8, 0x5fc91d61abb420f, 0xc9a529eca14bcd8, },
        {0x10df80af8606e388, 0xd323106ac94bdc4, 0xc55414a0292355e, },
        {0x7484d8f5a830ed9, 0x60c8f42b9b357f0, 0x18e157c20eb3f6f, },
        {0x5dbca2da6b1ce18, 0x1f3be411f4dc19e7, 0x192ebccb70274f5a, },
        {0xadab78df25e42a9, 0x2cd6e32cf2777810, 0x57d0b53db2899c6, },
        {0xb5e816e956f3e18, 0x55746ac48533ab0, 0x28fa28a2d70b8ed, },
    },
    {
        {0x161b478573024220, 0x256b681306938d33, 0x296d42df5922800, },
        {0x10980b3915c51e6, 0xff59494e13c651e, 0x1181f408b0aeb010, },
        {0xe9a5acdd040aafa, 0x2bf3bc25d6e296d, 0xe9a89da0ab09539, },
        {0x112e71c39bf07fca, 0x64af5f0ad641440, 0x142906f14e78621a, },
        {0x13a2d97ad8afd362, 0x1fc51087ca8bdee4, 0x19703f4ec58c39c0, },
        {0x583ddff25f264e0, 0x1c773d3fdb9d3e7b, 0x3ba5ba3e01b10d39, },
        {0x2f44f1dba8c8a458, 0xf7b7b4059972193, 0x91bbb68b77e6300, },
        {0x21eae6fb8b6c8a37, 0xd1333e88d22c41c, 0x16143e1a69978914, },
        {0x6ada437377cc023, 0x3cb77c166e29ef, 0xab5836cce52bba0, },
        {0x48b9ea344cb7cfb, 0x561a2da55168b99, 0x1ede3421708750b0, },
        {0x1384bd50c18a2417, 0x7ee6880a1657f8b, 0x168e4256f20db0b4, },
        {0x6caa5c0e50ab178, 0x149d2798e2ae6e70, 0x18e3e3a749610020, },
        {0x1d0b4d504992850, 0xcd8aff5897bbf06, 0x24d2ffe5d8f9dec, },
        {0x15c1943a3ad9bb22, 0xea2607df6717dce, 0x9e570d79a9cadce, },
        {0x1905ac1a8097dbea, 0x60117a167555294, 0x1124139991a6f2f9, },
    },
    {
        {0xa677dd4c3590b62, 0x12b69b523e5237d8, 0x10180b07f97c77c3, },
        {0x36048968c1cc8, 0x8e33d26ced96508, 0x22407e13617ef42e, },
        {0x94ee541d2d8ab66, 0x7b8ef1a228b0bd8, 0x7400005aca01023, },
        {0x1bb7b9bda19be64, 0x5ae76923fa09277, 0x15d0415271a44c57, },
        {0xae4217f92b086bf, 0x7c2cb1dc663300, 0x9028ab2ad611b1e, },
        {0x4ed8cb460879418, 0x195ad10b8dfe141a, 0x16428b00f9e76fc6, },
        {0x2020f0b53154a70, 0x40d7d4d2d95a40b, 0x7082654eab6b498, },
        {0x2b2c15354f3d739a, 0x2b1a0cf9dcb86ecc, 0x289f444b287a0a8, },
        {0x863a14ee317a758, 0x1cfb64e6cdb4c9, 0xa160b3c1ab140e, },
        {0x1dd6c457ef04f26e, 0x1f92ba354695754, 0x8f72f7d595f2cc8, },
        {0x2d5dbd5fa3587400, 0x85d6d9bfc51576c, 0x1d7b7f579e0b2dc0, },
        {0x65ab22feb476dda, 0x1551fb481fc87144, 0x2457fbd8494dca6, },
        {0x159fe6e5b97c6789, 0x1f7dbba7922b4e0d, 0x1288276436e1bb60, },
        {0x251fc6af67e1ba0, 0x3cec108585675e, 0x76b374298b4bdf0, },
        {0x2571ca8c6e15f732, 0x53469eed8a218de, 0x26f8df8cc918355d, },
    },
    {
        {0x1aeeaa092b51e2ee, 0x47790b126e6116, 0x39e636d3949047a, },
        {0x7937162ee88e5d0, 0x15000e7636340fce, 0x4acd23d864da84, },
        {0x1dbb978150ab26d6, 0xc26698dd17d9cd0, 0x897b8317b385108, },
        {0xe96eeb75a990ebe, 0x2e9603e1ea97f2e, 0x302ba7995bda974, },
        {0x148d3712c053cc6, 0x668e3ee8d759ca5, 0x3b77f0bedcd8b60, },
        {0x48a6281aaceb8a1, 0x47e6a40fcd10933, 0x25420b503a639456, },
        {0x2ead8c6109344c52, 0xcbcb2d67a7f24bb, 0x27624a259420468, },
        {0xbf23a57c952167f, 0x7a20d37032c053, 0x2b1c795725122dd7, },
        {0x836564f0aa770fc, 0xbda0a72fe67af7, 0x23ef6c43fb8f8ca2, },
        {0x8a7440a7f28da4c, 0x198dd27591e86618, 0x8bbbdd80768500, },
        {0x265dac790f7c21be, 0x3dcc4f8cf11100, 0x1b18cc5a061e4470, },
        {0x17e83647bb5c8db0, 0x240913f261647d6, 0x2cac6d2fb4f2538, },
        {0x26b99bc59052204, 0xd2b90fbaa38b4a6, 0x2031a8d1601c4248, },
        {0x61053fd1ceae880, 0x95a0303b0903f19, 0x286e63e694dbf874, },
        {0x12a4ea37b8cc5816, 0x21bfb4dd5dacbde, 0x15a5db103e52d25, },
    },
    {
        {0x24b0ba868109ed58, 0x208bc571d32b7260, 0x32bb52da2d91f99, },
        {0x20985247b547fcb9, 0x199909b93fe9c475, 0x1360464a946419a, },
        {0x205441d7644dc00, 0xa9624321bc84c8a, 0xedd1d6ee81e148, },
        {0x19131add7bec1180, 0x87dda0016a6efe3, 0x2964a37e035825a8, },
        {0x152fbb5ecf22d6cc, 0x287e791524c16c, 0xe806efd39a18fcc, },
        {0xd50dfd14dd3375f, 0x14beafbd5080352f, 0x7ff4e0b66b7b8d2, },
        {0x63848db1165c120, 0xa414a1bb465f920, 0xc79ee20e2d04a36, },
        {0xe270d3e9feeb492, 0x442acc1eceb5e8, 0x2ea9b0d4d367c094, },
        {0x20161abfb818806c, 0x31d672c72b15ea1, 0x21b17136cdcab85e, },
        {0x6a2a838be11a134, 0x1348f7c1b7682cd0, 0x25f73e51bbaad2d8, },
        {0x6c9a93fdfe157b6, 0x1232ef8715892912, 0x12370a8a97be5756, },
        {0x75bcf40474b2498, 0x86d7d5f3c68fc60, 0x1aeb3a314cfab18c, },
        {0x1c8617dec21e6300, 0xe34c0c235d46f8, 0x34393826102c821, },
        {0x2859732369149d4, 0x679f98a3b8d6c76, 0x902a8ab3dae479a, },
        {0xbbe667509d22fa4, 0x246fcb120f967a74, 0x180f51f7e75c49d2, },
    },
    {
        {0x30e5d09429fb7682, 0x2ac9e4e1c3fc70d, 0x5cb3a7785c4603e, },
        {0x69247799c17c7ec, 0x1f03e701fc5ea070, 0x2f2e0016ccd30df9, },
        {0x24ac641c9c18c716, 0x26e5b4d75f49f54d, 0x1e87149a062accc0, },
        {0x229a495196c44d28, 0x4f76f6895fec780, 0x27f44e377a47421e, },
        {0x2cf6838f3f0bd7fb, 0x3242f3557a42abd8, 0x26686339fda51b60, },
        {0x212d1cd10d19cdac, 0x1449ffe105480000, 0x2813b4cc2a0d880, },
        {0x3c67d56e14de30a, 0x3f16c33dbcd27d0, 0x3597402a553c4a74, },
        {0x58242a2afc72d74, 0x3eb8606c71192f0, 0x15c2a351de4924, },
        {0xba41c0d00e2b6d8, 0x20d8e29bf3c3fe1d, 0x3d16f2e06ccb3a0, },
        {0x6cee93d43d1a1c0, 0xd7b48f21cb4e08a, 0xc2520220824744, },
        {0x2fc41a9657fc7456, 0x592b5644d9f64e7, 0x2836f82304510e4c, },
        {0x65dcda172d5c78, 0x2178300d0c66d0a9, 0x1c78d264ffeb736e, },
        {0x653b61fa896e316, 0x99bc86d792fa93c, 0xd73fd02dce449b7, },
        {0x12de241b71f5a22c, 0x210dc189583d35d, 0x237725b35a367a04, },
        {0x788c09bad9b4af7, 0x1afd41ce01abe3e0, 0x22a49a6620083330, },
    },
    {
        {0xa08566fbf17d0ce, 0x2927787342e80a89, 0x1a592ca3eef93d8, },
        {0x144f4f72e98488fe, 0x28138077b8df2960, 0xec4102d3783a01c, },
        {0x6a8b5e2c2206d40, 0xafbe995caabc28, 0x22450d3daac497aa, },
        {0x4ddf958e154fbd8, 0x14632c813547520c, 0x2e48a08492ce6b5e, },
        {0x9f235bb1c721268, 0x1b3edea061578e44, 0x11dd38e39ccd051, },
        {0xb5eeeba2933a4, 0x2ea59c323f9976f7, 0x18cec25481b4580, },
        {0x2eeb604cf28656f2, 0xa0aa5a6b18d7d67, 0x898c28cefc4fc64, },
        {0xf6953674eb4ae1b, 0x32112bef16eaf058, 0x1092f2604d6c0180, },
        {0x849d0b756729dc0, 0x1af574ead80c3bda, 0x1d882784ae5190, },
        {0x15579c9d3678b9c, 0x15d6c49d8c1dafc, 0x26d96a1c512dbb36, },
        {0x1399c266bf6bfe, 0x12418bdb1b3946fe, 0x18bec64de19b93c2, },
        {0x8760ffbe311beb8, 0xbd5b1e823a9b7ab, 0xd13b2cc6add267e, },
        {0x1fc1332154d1b3, 0x258ad4dea459ddde, 0x4e1eb5406a8e908, },
        {0x477293a197b6ef, 0xf93bfe2f370c285, 0x29a05d38c1aab9e0, },
        {0x8f2793457379b6, 0xe391ab1eb6536a1, 0xf0101edf98f1e00, },
    },
    {
        {0x8d11315d61b2550, 0x217e2235580f0d0a, 0xa66814468fd69ba, },
        {0x112e84fb1b1f0f, 0x95ed1efea5d3a1d, 0x30e346fe63f537d, },
        {0x1e6745fc93cbedc5, 0xbda62310839ce88, 0xe037772b9c4873c, },
        {0x212ee09bbdd60bbc, 0x6db116ce3fceec5, 0xc58da8e5b71f9f8, },
        {0x14505edcd3f27964, 0x3c4816cbc1e5f19d, 0x65fca9a868383bc, },
        {0x22b2d4464a577f2e, 0x3adb28b4b6ce672, 0x223191f103f24120, },
        {0x2689ad32e3addc0, 0x8849522c7a28bce, 0xa0025f9914fce6f, },
        {0x305b3e8cadd3a7ec, 0x1fa636e3eb20d34, 0xaf21997fe5813a8, },
        {0x1a3a5d767541da0, 0x6b9a6583d80323b, 0xd8ef9ca08e0c902, },
        {0x62604cc27d7f2d8, 0x164b661ebdf0a0d0, 0xbf9df52c491ef8f, },
        {0x1ef9e8c90910c9e0, 0xd7ad410268490c, 0x199b76363c22afe, },
        {0xdd917dc0105645, 0x10ea1a66e02131e1, 0x1c5a1e7a1ddd6eaa, },
        {0x2053b73a8406b510, 0x1d24a0737193ef, 0x1abeae7d7298380, },
        {0x13e1f326b033a20e, 0xbb16f6fcccf556e, 0x1f7ada29752d100, },
        {0xe1836b9354a8800, 0x8e2b54070e7b71e, 0xbb34abd113f9ca4, },
    },
    {
        {0xf31b8648f32815f, 0xc31ff5332856390, 0x6c18e0314fd60c0, },
        {0x2c51510e8d295037, 0x97bd8aa151f8e26, 0x1e1dec345409a0be, },
        {0xfce7a1f8d1d6e1a, 0x553340383d53c08, 0x92d0de91e1b084, },
        {0xa50613d9008d100, 0x1b3ef54a0ef68c86, 0x5574e1bb8dec884, },
        {0x125d64161caff4da, 0x18a83cd5f1ee7119, 0x1ec24319659153c, },
        {0x9fdfcffa34ef860, 0x142d2571afb01e7, 0xdbcd5f7d9065218, },
        {0x17a924cd5978e04f, 0xada1be73d80fa4, 0x84aaaea46d48d8, },
        {0x142d1d3604aad53c, 0xc70f2e29e7817a4, 0x190849625ca01a0, },
        {0xc8dfc4351a917b0, 0x21c4ec799b7f4a8a, 0x6f7cb777a1ac3a5, },
        {0x2209492b91ea4354, 0x8aefd3c021bb494, 0x17f829e860c14b1c, },
        {0x1a4a584762cedaf4, 0x14c6c983f69bda34, 0x11168f77f922ada0, },
        {0x600481bf112f42, 0x49ee93a5ce9f8, 0xc1aaebfc500c84e, },
        {0x9efd406b479daf2, 0x3a1579530d3545b, 0x152d4b6d3893424c, },
        {0xdb3770d6ee24f09, 0x1916d681fbd52e34, 0x3534b726dca8149, },
        {0x253cf4f413d9b60, 0x145f41ac3340800, 0x475ad935ffb5fc3, },
    },
    {
        {0x1415dcd13688479a, 0x202840b9f3e8437e, 0xefb401b9965fdae, },
        {0x681026d6d8916c4, 0xb0e60c99e68a10c, 0x1c0e0c568664cd4, },
        {0x16d3fa9914a22c27, 0x58c556ba116a5cc, 0x6780cbae4ac75b8, },
        {0x7101cdcd74ddd3b, 0x5c8b124d42732e8, 0x6715cbbcdde3ef4, },
        {0x5bb04b77f90c84, 0x114ea717a112df60, 0x20f14d2cf09954f2, },
        {0x11ced0ae838a6d58, 0x1131fa32cbad2828, 0xef40d677b424773, },
        {0x30b4bb43fa1abc76, 0x14ac63154df1a5aa, 0x24b65406d1025634, },
        {0x96f99a84dd4dbb0, 0x13d8863b483ad9aa, 0x99539d4f1d15a2, },
        {0x1b85561b5c0de9f7, 0x1e7627d055aa, 0x1c8cb3a8d6c6a1d0, },
        {0x6a0f7420cd3ba7b, 0xddc4b9f3dc6f40, 0x3a96328e7b04f1da, },
        {0x47eaff7a24271b8, 0x2b2675975eec852a, 0x15e91bd2695e0a68, },
        {0xca4ce904cc9939c, 0x219090c647e2cbe8, 0x1caacdff6e1597fe, },
        {0x8c5f0beac47858, 0x16913d4fb64849ea, 0x2437976050f2bbe, },
        {0x3a1438c483262f, 0x3126049b02e0a16, 0x57a0092cba99fe2, },
        {0x3a539bbe00e49, 0x14a25e40f8ca38c6, 0x13b3e00deaad3238, },
    },
    {
        {0x22e29241aada2e7, 0x9abc0a8cb9f63b4, 0xd040f31ea804ef4, },
        {0x1e28bff060b3b82d, 0x250136ef7d698f25, 0x28a9567b253839d4, },
        {0x90e2a3754f0bef6, 0xb5bbd3d84acf63a, 0xd26e16f61a38de8, },
        {0x2be4edeb05fd20c, 0x30763a6b8cfa8486, 0x7c9ea40591a9168, },
        {0xe5e235ceb6c480, 0x220240fce8e3d746, 0x5282a70cb3249ae, },
        {0x6746bd3aea672ce, 0xfa950a6246d80c, 0x620e208f944f3c, },
        {0xbd834ae8f5ef5e7, 0x19fe32fc5e563eb4, 0xc0825500a0222c, },
        {0x1584729bd0da18ee, 0x14d13b7678a18dc0, 0x238d56e14d7ddbd4, },
        {0x164add89a796dc2a, 0xe761904b6b21018, 0x24dd687779b990d0, },
        {0x1efbecbf12169c50, 0xb84dfd0ec714911, 0xfead15989cef3cd, },
        {0xce9d48e70af5fc, 0x5b2854e5091eb00, 0x31dff0b8801428a0, },
        {0x8a4f5ab21b300eb, 0x101c8e6e6dded6cb, 0x18f033d2b891d785, },
        {0xa5d4a2c45d40d68, 0x7e20475467fd786, 0x19c7ec95520c620, },
        {0x8c760fa85820110, 0x12a6c808f7c84670, 0x73a845647d55724, },
        {0x27bde0b6b82109e6, 0x9422f84a6556fb0, 0x28a113dfc82cb487, },
    },
    {
        {0xd542ef3ce7a63be, 0x1ae75d376fbbafa, 0x8bd51c52fbcdc0, },
        {0x2640301427229e63, 0x1bfabc98c30bc8c, 0x375c410eb1b4a5f, },
        {0x27bb57e3cace253a, 0x2766a6142d04a5, 0x53390fe604bb48c, },
        {0x32e0f3fa308b4f3e, 0xb4f0b753b8060c7, 0x6149110a28d019c, },
        {0x60ee47881fdcb94, 0x274807df19cdaa25, 0x464c77c6d669760, },
        {0x16bb4cf20332a082, 0x202ea0dfc99809a8, 0x30a55bd00771443e, },
        {0xc09e51abbb9e133, 0x4c1f6d3614cb06b, 0x1f068d3e3659b310, },
        {0x16eab503c51a68d6, 0x29610a158c55df4, 0xaea0bb344e5d962, },
        {0x8a6da9c88462ae0, 0x33b0c71c29cb1088, 0x9cca490cca23938, },
        {0x1f53f43471f02a80, 0x218e8e6d21fc0f81, 0x260169440d9e3db1, },
        {0x56e9f2b5084d2db, 0x2aadadb184d35c54, 0xf867b352be3aee7, },
        {0x41f1402e9111048, 0x7ee5b5ca2e68750, 0x82f17fd15ef82d6, },
        {0x1551c8d48db1efcc, 0x252f3f9504d15bf0, 0x3de6c2a9954814f, },
        {0x378372f72502fd5, 0x225ee8f89ac8468c, 0x1027d604c8a0866f, },
        {0x1b8bcd5b09f5dfea, 0x17fcc6b5008e63fa, 0x13d06712f1845a45, },
    },
    {
        {0x11c092ec9ab3eec, 0xe096dda978dedd8, 0x227bcf51e27d0fe, },
        {0x1c9d579fa2593ba5, 0x4e64b755a11b8f4, 0xa8483e1aeafa9b8, },
        {0x1e4abd4286e1ffda, 0x110bf2ece8a60f2, 0x9e11720f66513b8, },
        {0x13b5066d29cb33ea, 0x33ce50cf0e415b, 0x12bd42b1898064de, },
        {0x7ec6e0a5ae85588, 0xbd5300ad9389b16, 0x20dbff34b1935862, },
        {0x1301c8b18380af12, 0x104e744d6b1046e0, 0x400d15462fc673f, },
        {0x1056d33b1c99b7b, 0x1b48581cc3435ce8, 0xdd9ec80d3d3f018, },
        {0x1413e6ccd33148be, 0x84c1b78b6021357, 0x1bb95c8ae99ceed0, },
        {0x235beb9990207b20, 0x28a7f255ef39245e, 0x22cc744a7fc2178, },
        {0x2eb083767102865, 0x18b3a96b1d8b7718, 0x201b5e177c7c69f8, },
        {0xd2ffc0cbcf57794, 0xaa393664db6fdec, 0x8476e0381175130, },
        {0x2f9afffa6e9fde88, 0x56311aa91249272, 0x18cc58c02bf8b268, },
        {0x21ce359c387305d, 0x1c9f6a8ecd3ff638, 0x2f67832f785f42ea, },
        {0x302f0da5250eec0, 0xef17d83ee87bb30, 0x1f158c658492cd18, },
        {0x29bbb7ea7ddc5f, 0x5fc44c78bd9bf1b, 0x4e2b9d1b6477847, },
    },
    {
        {0x34b947fe5a0f215, 0x26e1f5baf618108, 0x4333847a4f518c9, },
        {0xde79b7c4eb46440, 0xcbdcf9cad6771a0, 0x8950b8cf31bc64, },
        {0x812c4d57e198968, 0x85fce8ddecc5b8, 0x1ed323cec1995a66, },
        {0x260f8ba15e8b0632, 0x18f0005013a17720, 0x8d786622ca0ba7c, },
        {0x95c7a437a0a9d12, 0x40d0bc95a70bc92, 0x2e2f3bb25430c48, },
        {0x908bb12d60cea64, 0x140446c4e47e7d0c, 0x121fba3b9d617c90, },
        {0x1b1fa1e604eecd8, 0x42c2cc248af1471, 0xa16d4c174b18540, },
        {0x2177f024abd3a56, 0xf773fae8b4d9684, 0xabcfcd66b60e036, },
        {0x187bc0cb2344ba0f, 0xb7014c044e31b0c, 0x3513a98a02f98ac, },
        {0x1e053bee22fbda5c, 0x37816350be81da2a, 0x362f9f0b9df1704, },
        {0x71803016e8721e, 0x9ba518b219711c2, 0x1658064c6fdedfe, },
        {0x19d23b5ba083b07a, 0x424439975dd2c84, 0x25dadd7206c7ede0, },
        {0x175603bc23ac06a6, 0x1bc6142f0f587374, 0x7def4477b0fae7c, },
        {0x1687ca5bcd1b800, 0x2b51becc4467a0ba, 0x1b25dbc97697b5f8, },
        {0x93126aa61a6f8f7, 0x63a090115688aa0, 0x172421fdd2f14230, },
    },
};

ull key_rand[15][15][3] = {
    {
        {0xbbc99192fd90a7a, 0x8e7f74db34e5709, 0x1d4541bdc06547f4, },
        {0x1ed434b87f96bd58, 0x7357f8cdabe85e6, 0x96664df1e572d97, },
        {0x21f0b49738cc0102, 0x818a23be1d954ec, 0x9c252b3b6eca29e, },
        {0x2d297f049d8a2ba2, 0x205bb1fd5dece216, 0x28183da50c7b4e98, },
        {0xd6ff86aae98bc58, 0x195761edb1654c41, 0x25d22c17a306cd00, },
        {0x1bf6e8e0cd2286ba, 0x24106378580b8ec4, 0x114ec1c1cad0212d, },
        {0x1b0bc6fd09dc280, 0x1d65d9e85411f4, 0x30a881d551ed047, },
        {0x91fad2374150250, 0xaf94b3932dd2b4e, 0x11004422d71f474, },
        {0x321e174c9ea2aec5, 0xb0eb6126904b0b1, 0xa570217f065c800, },
        {0x1705ffd1f359e170, 0x9e624e76a27f4, 0x98f86347ffa7424, },
        {0x383224269632b28, 0x1fbd0f6cfffb0c87, 0x11634726a9239c1d, },
        {0x2e6b0e6a95a6c649, 0xf1375c9e9b6d45a, 0x2e9159f6deef2a5e, },
        {0xfefa434de2c3b60, 0x18cf68b3bedda11e, 0xa83b1af51226aa2, },
        {0x2705a31cff0fc88, 0x890493a4e472130, 0x1541bbdbe623455e, },
        {0x2813a904c786234, 0x90dbf393845efb, 0x2a378f12e8fa340, },
    },
    {
        {0x15e119049ba590e, 0x80a28cc0e245d58, 0xa4aa0f12305a0b9, },
        {0x24fedf918669b94, 0x11b2e0984fd7ffc8, 0x6ec721a72978974, },
        {0x8bddfc1386e2e70, 0x2f03b4bafd1c5c9c, 0x11b0042476a7b4ea, },
        {0x19f1c7ca3a30b713, 0xceb7fa0047af373, 0x122bfe206cbf7da6, },
        {0x256aa150b528fd0, 0x240762a15e91d6a, 0x2cc51a6f627eafc, },
        {0x315719eab0d082dc, 0x201a16c8c5540cc, 0x55b141d6e84a862, },
        {0x161bdf32475734e6, 0x332fbbb43a6fedd6, 0x324bb7ad64e3cc53, },
        {0x1b0409c46db25f1e, 0xee5caaa18444f51, 0x14d020f67b6b2cbc, },
        {0x1d943eb3bdce84c0, 0x6e6f08706b6110, 0xdedae5fb553b964, },
        {0x8fed6d290ebf7c5, 0x9b0fa1e2bc0790, 0xede37ae4ce35eda, },
        {0x110288f2a273f925, 0x17fea3a2acb2e234, 0x12c2c214a954a04a, },
        {0x7cc6d485ebabe20, 0x26ad89016299e1ac, 0x1462df46068f978d, },
        {0x4cd05ba45e27fed, 0x1ab7d0c53dc84946, 0xb38892444e20cfe, },
        {0x71231beb066ffae, 0x52fee8719e0dd26, 0x4ca032a559f2fd0, },
        {0x31bedc3fd89dd3a, 0x2bdae80787d3c7ec, 0x32a29beb456c00e, },
    },
    {
        {0x1b3d69e3dcaf9b80, 0x10aa58898fc01aa1, 0x5e3e0d46af38ddc, },
        {0x2d94efce55792c48, 0xa683cafe82cb842, 0x135af79c883b4ca4, },
        {0xf29c33efc678428, 0x178015b3ae77ed04, 0x1f3b588859ecb67f, },
        {0x24ce3265150e9c08, 0x39b0a2581f77c50, 0x2518c5a39fd4b, },
        {0x19239f251cdf465c, 0x2636c07ac6dc2aa0, 0x18a0796e69d41db5, },
        {0xf98b39fde3615f6, 0xb9cb7327ecc7a00, 0x12ac03230667914, },
        {0x3a3eb26a169432c5, 0xacef23db4d93cce, 0x106b34ba84f6f518, },
        {0x24a485bcde47ec, 0x553c4f3464c48c8, 0x205ca916126bfd11, },
        {0x27437aa273c87b42, 0xfe71cd89dd4ff72, 0xce41ec42c694ed9, },
        {0x12e1a6d57be29136, 0x30eb5d19d186c16, 0x96522dfadbb8988, },
        {0x30672b58203a8e8, 0x2ae6da953d3db90c, 0x107960496c935910, },
        {0x1289e591427846be, 0x28bcea636c5f7657, 0xa10df97554e181, },
        {0x56503bda73814c8, 0x1c411021542d950f, 0x21953ed97a59b7, },
        {0x5f165cbb97f9d04, 0x2abdc803eeb10f60, 0x102ac09186dd5a, },
        {0x1184da6c076396a0, 0x3b2f3d90d2d349b, 0x68a1beb9d4a0ad0, },
    },
    {
        {0x621a5901227089d, 0x241905943c5aeee6, 0x2f4ba9324266880, },
        {0x39f2cc02bf72ddc, 0x542aa2d3980619, 0x1d32cb4c912a0e94, },
        {0x80a332c8438b71a, 0xd32d16f4585bb41, 0x25efa3f2fcc31862, },
        {0x80059a63a8c0180, 0x1bad0f3329c3a8a, 0x1a4b043305f5fe64, },
        {0x23477c6f176de968, 0x1eb99f32ddbcde06, 0xa6c9d4f372536bc, },
        {0x8120d4dd74d6324, 0x1081a176dc12c520, 0x90935280ff85ee6, },
        {0x1d9cdfef1ce66814, 0xa10283f3757d286, 0x16112d1c01a0a49e, },
        {0xcb0f877a1ec3da, 0x2070b30ee655db8e, 0x56b2b0b265981df, },
        {0x27b49a4a0f9a720, 0x8c48aed365fb16, 0xde101c4ad8879dc, },
        {0x1747bf4b63e95bb, 0xb89aee81c2925f, 0x51d041dd62b1797, },
        {0x45c59a49f846c20, 0x1962990578109b0d, 0x10ea6a9a05fea82, },
        {0xbe253e2857058e2, 0x8895a1a8d180360, 0x35f9931697cfa47, },
        {0xbf3649aa754c31e, 0x5182bdebf0274dc, 0x235d90dd18fd5f60, },
        {0x18bc22fd64b0ce40, 0x1832708f9d75d94, 0xa19cf7fd4b86585, },
        {0x1624ae51fcd822e8, 0x1100e331cbba1fdc, 0x8248b88ee0aff6, },
    },
    {
        {0x143ec1bef1c4700, 0x3ab06b5f59a52907, 0x260ed3f9a8150f80, },
        {0x7edc601a59c201d, 0x750fbc218a2402, 0x34d0b639477254, },
        {0x21fa8d45ce7798ae, 0x36b09140f2f919f, 0x36073f4f99570f00, },
        {0x1965a834fc9c94f1, 0x54233b2e0de53b0, 0x1a61e4b3b1349de, },
        {0xfebf194c44b13cc, 0xaca07d6ea6a63b8, 0xc66418175ca976, },
        {0x2b245f9100fa31e8, 0x53e5a9d1bc7b868, 0xe9d37dc611453c0, },
        {0x2e414162f87615a, 0x7939ab10ad469ee, 0xc36980915888260, },
        {0x171606b1a6733274, 0xc1df3ca17ed1620, 0xb0f295637d80938, },
        {0x66202527233dcf, 0x25aacd202d04669c, 0xa968487e9f1a014, },
        {0x24a75579ac793d1a, 0x136605cb8c9b6391, 0x10c98a6fb5940384, },
        {0x173169d24d40cf32, 0x2161ead38d0fa8d, 0xfd1c74f5e3315c4, },
        {0xacb186e6ada6800, 0x5ff5ef16b9e0320, 0xeb5e9245211b75f, },
        {0x2aa30434ca297554, 0x177c9823a90037ac, 0x211590a3c1585d3a, },
        {0x118b3ef9c594b959, 0x1451fa0343d5d250, 0x108a066d7b9a4fc2, },
        {0x1607eebd66ac6b3f, 0x1c2bd189ec4ef1f8, 0x158bd58fcf0dd94f, },
    },
    {
        {0x9cedea5279c5e9c, 0x174ea52bef7c4f6b, 0x6aa3b29ff376ef0, },
        {0x3a5242a2da690a4, 0x23f489ec66072bc0, 0x1ea80444916921c0, },
        {0xe48328bcd052b98, 0xe07901cf1b110e4, 0x4a709436b900831, },
        {0x3fcaf60ea64e9d4, 0x52cc70dd0290e9c, 0xaf3f460f5227dfd, },
        {0x1d4b530da3285a16, 0xeb487a754bbc04, 0x81bd4fb6e87c2ce, },
        {0x3799e472f0f7f40, 0x2bfdbfbfa7e69dd, 0x134971d3232e0190, },
        {0x46b5ab436aee16, 0x3b0e0137b9ee9d56, 0xd481a1ed611ef2e, },
        {0x284a5f2e60c41ccd, 0x2ef2c6e377b1fa22, 0x228f30edccaa10f9, },
        {0x1cafb9423bbf098, 0x7735177594ca0d5, 0x1f16bc656122d5e8, },
        {0x1bdf69be61ad848e, 0x170bef57ecc211ae, 0x386b5ac336277fe6, },
        {0x1e209bc768939207, 0x3d28871c31049a, 0x44e9fcd1d15a703, },
        {0x128f6499747d430d, 0x31a571668bad6da, 0xd58e14f05e48f95, },
        {0x797f1c14b67cd08, 0x140e795a965530ac, 0x1f7aa41796043c4, },
        {0xb8c93dd91f00424, 0x1aa99df96260669, 0xa83de712794134, },
        {0x6fb731033ef107c, 0x2e7477e2b6b9748, 0x195156e9e5d4bb0, },
    },
    {
        {0xe00aa790e622769, 0x16d3b7790e899fbc, 0x827e38bf3228f49, },
        {0x11d044cba3473a52, 0x41f7d9c1809d9a5, 0xf3d02318b234eb, },
        {0x6042711125d55a4, 0xdd4f23ec288d568, 0xd80e70971e005c0, },
        {0x4623ea45951d96e, 0x4522f5c0cdc3c2c, 0x19de234849c7bea4, },
        {0xad04cee13a097bc, 0x30f84b13400c5cc, 0x3ac322a5e5e4675, },
        {0x140b43bed629b9a6, 0x105c26cbbb33150, 0x36240b8535194c8, },
        {0x1154f66beea7d86b, 0xe43a55edb07db4, 0x10fff7b7f7ce007c, },
        {0x1cd06f212c42e821, 0xa799ddc83ba5868, 0x8e75a435d6f26a6, },
        {0x10b51f32615a8fb0, 0xfc455803166c811, 0xbe17b39e24ad7d6, },
        {0xa54de47d2ffa800, 0x27112e5255c74883, 0xfecd3ebad0539b0, },
        {0x5e5cd491b86f4d0, 0x2c760d85c060efc, 0xd84503863ef86d8, },
        {0xa33e3183c666932, 0x1c11b46baca97ef6, 0x70615e6fb96f30d, },
        {0x2f3f5b5782b7caa, 0x5647173bca4eab9, 0x30b6c9c6bea05f30, },
        {0x13307acf2e6b18f0, 0xa392da87a4206f2, 0x2e571c2d2f29fe0, },
        {0x4d21279af55d171, 0x75e84f33008b4da, 0xbc49e288b40de19, },
    },
    {
        {0x301661fd0ff791d0, 0x60bec3e0bf5376a, 0xdb27edfdc7578ef, },
        {0xaf0c513f60b5d00, 0x1e0a191a69f80f90, 0x6d9ed12235237c3, },
        {0x15a0135138bcbcaf, 0x4d24ee1cc69bbd0, 0xe7989a020f01d0a, },
        {0x6d5e5bb6ac60c0c, 0x10d771d7fcd56f60, 0x1c23065a27495886, },
        {0x2414c520cacbc, 0xcc97eb60a578f8f, 0xd3e77dd039a4c43, },
        {0x7b39effa6f3a4b4, 0x7978b0a1e4bf47c, 0x1071bdaf13037ff2, },
        {0x41d047b55e98083, 0x837b7f72a1d8a6f, 0xd8cf6c12fba3506, },
        {0x61d399225115f, 0x2d55d3ec765ad48e, 0x27d9692d18e1e595, },
        {0x21d4b6e719d7aabd, 0x1cae0d6e884c34a4, 0x3c0ed35d70d9b98, },
        {0x7dc97ee104328fa, 0xf868ed88e87e634, 0x10867c4323745778, },
        {0x20727e195fc1bda0, 0x3f9f4a362aa6d0, 0x45b3a9b3f24b61e, },
        {0x7019a892cbdda16, 0x144650cd2e31e38, 0x743fde6420f10bc, },
        {0x1ed1a14b25cb14, 0x6399807bb71cbee, 0x6cb9a2c91a8523c, },
        {0x8fd5e434661f1f7, 0x18d602a7c8096fa0, 0x1fc2a7d0b7f9770c, },
        {0x175709dcf20ae625, 0xebb96e11bd138bd, 0x24e190b72e709013, },
    },
    {
        {0x2220cea332ac94, 0x1e7d31549a43736, 0x41e6c611ccfcf0, },
        {0x8e8361c9f802046, 0x24eac6fc97dfabc8, 0xb173da043dec9b4, },
        {0x142b69589ff91610, 0x3eb227d1074022a, 0x301e926a44e66ec, },
        {0x2d3388367012fd60, 0x203aa3e442c63ca6, 0xcfccfe910437e0, },
        {0x68c4663e0c2a10, 0x56cdc90416e81b4, 0x275c57217ce5a0b5, },
        {0x10c0af075bdb80c0, 0x1306c5bd0e392443, 0x17f9068f830d0174, },
        {0x1247a68edc4b549e, 0x6a477d86c994ae8, 0x18d4f0310a4f270c, },
        {0xf5e4be956da9774, 0x757f62ab57f0ed, 0x138e471cb6441d20, },
        {0x189ec619e3713abc, 0x7db1e9b2cfedcd8, 0xa84e0a15acec8be, },
        {0x22cf7bdad76c6310, 0x11767cf060492f9b, 0x1d7e2bcaa1c8004, },
        {0x866244a5204324b, 0x243c1aebd0189eb0, 0x1630fda9e8ff5fc, },
        {0x39c59099841807c, 0xea4b47b98ba2ad9, 0x5668dd0a0636d91, },
        {0x13bc3a4d8cba364d, 0x1747ec8ad78601d3, 0xc26010632726688, },
        {0x9be524763a3b84d, 0x572705a77290680, 0x9754d13c004e4dc, },
        {0x3ee25310c702fc, 0xd944e42ba5dbc4e, 0x144b8227c43eeb44, },
    },
    {
        {0xbe85facc9d5f8ee, 0xfca95a60cbebf0, 0xf53701fb928f794, },
        {0x5a8aebc6c4355d, 0x2f85a340f2267fd6, 0x1852e9f833c0f620, },
        {0x3e6e0c3625595a5, 0x301e66a48a78030, 0x1483a4447453e400, },
        {0x1a90d09627bc3dc, 0x3a239b7abf2d75c, 0x147890653bd7bbd2, },
        {0x17cba45d651aa000, 0x1e5ea22fcace2700, 0x2920374127de030f, },
        {0xe2416884f74454a, 0x1c40f07061da5748, 0x658bce1a514cac2, },
        {0x10c10a69ebfe15bf, 0x7e628fa864b5253, 0x17c9e7e9aba9fd6, },
        {0x470ede732502454, 0x1489a0c328e9b488, 0x17049b2be0154d82, },
        {0x644e6e3c466862, 0x1f3ca20000ab01, 0x120575f84808f144, },
        {0xc9dc680da1a36cf, 0x4600367b70461dc, 0x42499677e1a7384, },
        {0x71305bf25e544b0, 0x12e5209e5cee0b86, 0x1d199d91f81168c, },
        {0x4e7144d99d57834, 0x333848cfdce7e0c, 0x69387b3394e2f92, },
        {0x30b2534dd69484d8, 0x5478716152ecbde, 0x2b0c683bf55b41ee, },
        {0xf1bca8fa861134c, 0xdcac068bb8fca88, 0xed71b7fd7908894, },
        {0x12a870ca96f703a8, 0x3acb95d223a9d5ee, 0x278de3a22287f07d, },
    },
    {
        {0x26a4b915698c1f00, 0x1f75fffe549f42b0, 0xde6d862a505f3, },
        {0x354b577ab7226ee, 0x1bc23517d296f090, 0x422dbde53fb5e71, },
        {0x1abd614f2a3dad34, 0x3529ca850617ade, 0x13cdd6fbe01b5d54, },
        {0x22db667194e63ba8, 0x11f2eb4eb3699a9d, 0xded4cea9c54fb9c, },
        {0x158bd74926590170, 0x11f12ac402934ca2, 0x1cc5d36ba5148242, },
        {0x14da9951658cc970, 0x6a7b8fe6f47ae12, 0x793fea1f233052, },
        {0x46880d79a9090b8, 0x7398bcc9720a780, 0xb048597ee3f7d2e, },
        {0x11b7e326ad3bdda7, 0x35abe05981fa920, 0x18f375a83460e75, },
        {0x16f6fe4ebd8b782a, 0xddc236d3c24de22, 0x11cedf2cc446cac0, },
        {0xb554a13c8e50558, 0xb51f0d1e4f5447, 0x3d0fee1769587bc, },
        {0x157fdc60c85600e1, 0x13aad18bc5563e12, 0x1888e16ba71867d8, },
        {0x421f9fb82cf5927, 0x13d180388f8949, 0x28eb9b1a2d85efc, },
        {0x21554ea314e0e75, 0x27746621e2b3de38, 0x1b3f5c9c28c35a94, },
        {0x981f98a276ea38e, 0x2f5ae7d66aa28c0, 0x8480f1708c85cd4, },
        {0x165632d116b4b11c, 0x37c9f2417310c80, 0x8fb814a9f9fd917, },
    },
    {
        {0x17a7dbcb5f00532d, 0x1693ef9eea177acc, 0x235699baf0db56, },
        {0xcf9c428a9ae8c7f, 0x176bab7d940d5ff5, 0xd68eed6de34a33e, },
        {0x1abf39ccf29c94b4, 0x4ef9bae6d94e573, 0x89d95d47234f7cf, },
        {0x1b21554cabd2eda4, 0xa8f03c6b7d5896c, 0x40fc57237f25a65, },
        {0x12d90ee789b234c8, 0x11a35432bf665d3, 0x38ccffb1d69d2a00, },
        {0xdc7d33ec76918cf, 0x1e31c95d196e58d, 0x187bc4006b8f7429, },
        {0x2ee491e788aeac0b, 0x3619533feee7b0b4, 0x2958b038e0a3479, },
        {0x68efc83d9196111, 0xd85abc4fc902ddf, 0xa9d575bf72daa80, },
        {0x2ce9de2208647213, 0x4fc41e33ecf05aa, 0x208d2a8258b66072, },
        {0x355cfcbe5140a46d, 0x267687fe4b5d6880, 0x203cc4a6fe8d428c, },
        {0x854b8d6aea91fc9, 0x20653b878fffecf4, 0x1a03ecfd984b9ef4, },
        {0xa1aab10422f24ef, 0x10a461237d122d3b, 0xc26046fc750b05e, },
        {0x333b6504fa84b9bf, 0x1b448af27a361060, 0x8a70adcabde2910, },
        {0x14f64c80eecc80b0, 0x139d80eedd84a42f, 0x164f092b2b95312c, },
        {0x5fd41a97ccaddda, 0x2c02677b3fe9f541, 0x13d50cd550f3a050, },
    },
    {
        {0x7274311790b9323, 0x894cab484836314, 0x43a52ce87997c18, },
        {0x2ad4d42e1731f32c, 0xaf9ac2beb775530, 0x11f645f9dc92a483, },
        {0x12c2c65b227c78f0, 0x1a65ef7c57c4c893, 0xced68ea112a5dc8, },
        {0xee8721ee8be3712, 0x1c051ffee3279db8, 0x455a2121e31e9a0, },
        {0x1ba0c2918a2e104d, 0x11f130b4226e6db0, 0x742ef920643b404, },
        {0x132a0c38d4b97448, 0x3edf6b437c0fde2, 0x5e649b75a0e0047, },
        {0xecd76392f984325, 0x229dd0065fb723e, 0x179f0c966a73c3e1, },
        {0x1a1e5cc1568f6df1, 0x1363178a2f7e2cff, 0xbf8a9485a15fee0, },
        {0x60cbab68833ff9c, 0xfde4ab57563f230, 0x246ae2f514334c13, },
        {0x5b93b4c99b57b2e, 0x2073e66fa4b5080, 0x7e6fb88b60eb4be, },
        {0x5897b142cdf223b, 0x241ae31c336341d4, 0x14fc6211d1d44cd, },
        {0x289d3d51df236c, 0x105446209576772e, 0x2a579b15ac65b023, },
        {0x28b6d75d87830f8, 0x7dc308196743acc, 0x6c1b3ff61f7c196, },
        {0x82a68e9e8b50aae, 0x15b6a8b08fbbacfb, 0x15edeb05563f1852, },
        {0x22a1b5b6b6590ab8, 0x29bc2773d997f63, 0x4f7a21f598d9950, },
    },
    {
        {0x4badd664f8f2a02, 0x274e8a77e9b85c7e, 0x266c7fb8c526ba8, },
        {0x29f21492f12fc463, 0x160d29bc68d37067, 0xcacc3ffdf08e6ae, },
        {0xe8969c899ff5584, 0x16c3dec0ad9ba894, 0x2fcab388dec52b29, },
        {0x35fe71296b429d4, 0x13c34ef6d445674, 0x1d5a3875e1c5b89e, },
        {0x20200045fbc456e, 0x306422af9e90973c, 0xa32264b10d5a116, },
        {0xd1fa31fe06020af, 0x59cd63e07348180, 0xae3a523b151ddb, },
        {0x33435bded2efba1d, 0x2fa6cca3203ce0e, 0x12954b0acb7a2518, },
        {0x2faefec634fd740, 0x2c1b150d4c37530e, 0x3197b9e7b52a6b11, },
        {0xd0bacf2a6821cb7, 0x7bfe92818e0a8bc, 0x4a16e56df85e6f6, },
        {0x29ca7163f8bdfe4, 0x117630918f0db488, 0x58782c8afb292ab, },
        {0x2169fb49ca93454d, 0x3828234f60e4ee5a, 0xf3cebada90be4a4, },
        {0x17f92b59eac29ce, 0x340b60aeee39f79a, 0x34366d74ed6bb80, },
        {0x1d37f430045b52a7, 0x1ecdc7675592bf7, 0x1494faf09de199c0, },
        {0x449e5ed52e84ac2, 0x12c8cc31d2743115, 0x60d6ac9d6ad28e0, },
        {0x6ba119e3d026f77, 0x20965c7dad822af, 0x175d2db39e1d1330, },
    },
    {
        {0x2e3f6d2bd32c1c2, 0x81344cae90633d0, 0x26ff66d48598af2, },
        {0x34c8526691ff234, 0x1b88d31757c76a08, 0x1a713823392a00, },
        {0x1b5c0401fa5cfea6, 0x8e69c702f65e4b1, 0x88b5d2159b23240, },
        {0x30eccc10bb9450b0, 0xeadf76513c780f8, 0x296afd0ee318f302, },
        {0x82120de421132ac, 0x59d44171fc9d6a8, 0x1564e0ec43425bd4, },
        {0x1ccf0fc6f0541b7, 0xa48ab5e902e12b4, 0x64d3942ee89051a, },
        {0x1762285ec81d5969, 0x10176569d3e4d696, 0x15ca5b9d034584a8, },
        {0x214445b520e03a7b, 0x3182ed67e14bc38, 0xf10401d8407995e, },
        {0x1a8a96ab1a81715a, 0x954ff9f84a67526, 0x122435b73c526022, },
        {0x1c6bee5c85fdc420, 0x33c014f9f28dd219, 0xd3b01ac5c6637fd, },
        {0x2888abecd869c874, 0xb16c7e90d758bec, 0x1650479e343d5628, },
        {0x2aec19df4bb6b6e8, 0x394fd676d67b254, 0x28491836034798c0, },
        {0x18207e0b73ac26c0, 0x45c09daef459820, 0x1821840b6dc6fe2c, },
        {0x31f27e361cd709d, 0x3ac079bc68122dc0, 0x6984947fa0e48c0, },
        {0xc53320ec01012a, 0x36618b5c0bc0629, 0x8c45bc319ca605c, },
    },
};

#endif /* globals_h */