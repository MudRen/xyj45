// Room: "/d/green/house0.c

inherit ROOM;

void create()
{
	set("short", "��լ");
	set("long", @LONG
����һ���ª����լ������խС������ɢ��һ�صĲ��͸�ʽ���ߡ�
�ݽǵ�ʯ¯������΢���Ļ�⣬һ����֪��ʲô�Ķ�����ð��������ζ��
��һ�Ƿ���һ�ż�ª��ľ���ͼ������ӡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : "/d/suburb/es/green/path3",
]));
	set("objects", ([
	"/d/suburb/es/green/npc/woman1" : 1,
	"/d/suburb/es/green/npc/woman2" : 1,
		]) );

	setup();
	replace_program(ROOM);
}