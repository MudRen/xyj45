// chaoyang.c

inherit ROOM;

void create()
{
        set("short", "������");
	set("long", @LONG
������ǻ�ɽ�Ķ��塪�����壬춴˸���ƺ����Զ������������
С�·屳��ɽ�ӡ����������ϣ�����һ��������ӡ���ഫΪ��������项
��ɽʱ�����µġ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
		  "westdown" : __DIR__"zhenyue",
	]));


        set("no_clean_up", 1);
        set("outdoors", "xx" );

        setup();
        replace_program(ROOM);
}
 