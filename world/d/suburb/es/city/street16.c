// Room: "/d/city/street16.c

inherit ROOM;

void create()
{
	set("short", "��դ��");
	set("long", @LONG
�������������߾ͳ��˾�ʦ�ı����ţ��������彻ս��ʱ�ڣ�Ϊ
�����̲����ˣ��ٱ����������һ���ܴ��դ������������ս������
�ˣ�դ�������ˣ��������ǻ���ϰ�ߵذ����������դ�������þ���
�������ͱ���ˡ������ö����������ǻ����µĲ��š�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
//  "west" : "/d/suburb/es/city/siyuan",
  "north" : "/d/suburb/es/city/northdoor",
  "south" : "/d/suburb/es/city/street7",]));
	set("outdoors", "city");

	setup();
	replace_program(ROOM);
}