// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat 11/6/1997
inherit ROOM;

void create()
{
  set ("short", "�跿");
  set ("long", @LONG

�跿�����Ϲ��������Ӿ۵ĳ���������һ���ſ�һЩľ��ľ�Ρ���
����һ��Ʒ�裬һ�߻�����ɫ��ͷ�Ӷ����������С����ߵ���ͨ��
��ϼ�֣��ϱߵ���ͨ��Ϧ�ֽ֡�

LONG);

  set("exits", ([ 
    "south" : __DIR__"xi3",
    "north" : __DIR__"beixia2",
  ]));
  set("objects", ([
    __DIR__"npc/cha" : 1
  ]));
  setup();
}