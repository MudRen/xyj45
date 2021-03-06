// Room: "/d/sanyen/heal_room.c

inherit ROOM;

void create()
{
	set("short", "流云轩");
	set("long", @LONG
你走进这里, 一阵刺鼻药味向你扑了过来。这是一间相当宽敞的
的大房间, 是玄智方丈为人看病的地方, 也是存放药草的地方。与屋
顶齐高的木柜, 画分成许多抽屉, 里面分别摆放著药材。两侧的墙璧
上挂了许许多多的檀木扁额(plaque)。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
            "south" : "/d/suburb/es/sanyen/inner_yard",
]));

        set("item_desc", ([
            "plaque":"┌————————┐ ┌————————┐ ┌————————┐\n"
                     "│                │ │                │ │                │\n"
                     "│ 妙  手  回  春 │ │ 华  陀  再  世 │ │ 扁  鹊  重  生 │\n"
                     "│                │ │                │ │                │\n"
                     "│    发呆部部长  │ │    打混部部长  │ │    摸鱼部部长  │\n"
                     "│    兼奸商部部长│ │    兼强盗部部长│ │    兼奸商部次长│\n"
                     "│         Elon 赠│ │     风火血舞 赠│ │       梦忆柔 赠│\n"
                     "└————————┘ └————————┘ └————————┘\n"
                     "┌————————┐ ┌————————┐ ┌————————┐\n"
                     "│                │ │                │ │                │\n"
                     "│ 药  到  病  除 │ │ 仁  心  德  术 │ │ 杏  坛  佳  话 │\n"
                     "│                │ │                │ │                │\n"
                     "│                │ │                │ │                │\n"
                     "│    插花部部长  │ │    无言部部长  │ │    发呆部次长  │\n"
                     "│     雷神之子 赠│ │     上官逸倩 赠│ │       克□□ 赠│\n"
                     "└————————┘ └————————┘ └————————┘\n"
                     "┌————————┐ ┌————————┐ ┌————————┐\n"
                     "│                │ │                │ │                │\n"
                     "│ 悬  壶  济  世 │ │ 技  惊  关  羽 │ │ 医  界  圣  手 │\n"
                     "│                │ │ 吓  死  曹  操 │ │                │\n"
                     "│    打混部次长  │ │                │ │                │\n"
                     "│    兼强盗部次长│ │    摸鱼部次长  │ │    发呆部食客  │\n"
                     "│      托佛尼亚赠│ │         陈平 赠│ │         悟明 赠│\n"
                     "└————————┘ └————————┘ └————————┘\n"
                     "          ┌———————————————————┐ \n"
                     "          │                                      │ \n"
                     "          │      全      是      放      屁      │ \n"
                     "          │                                      │ \n"
                     "          │                                      │ \n"
                     "          │                超  级  打  屁  大  神│ \n"
                     "          │                  安 尼 席 洛 特 尔 赠│ \n"
                     "          └———————————————————┘ \n"
            ]) );

        set("objects", ([
            __DIR__"npc/drug_bonze" : 1 ]) );

	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
