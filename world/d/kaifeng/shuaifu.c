// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat jan 21 1998

inherit ROOM;

void create ()
{
  set ("short", "˧��");
  set ("long", @LONG

˧���ڵ������������з���һ�ѷʴ���غ����Ρ��ݺ���һ����̨��
�������һ�������Ľ��裬������һˮͰ��С�����ƺ���������
һ�ţ�ͨ��˧���⡣

LONG);

  set("exits", ([
        "west" : __DIR__"tianpeng",
      ]));
  set("objects", ([
        __DIR__"npc/zhubajie" :  1,
      ]));

  setup();
}

