//mac's zhengyuan.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","��Ժ");
  set("long",@LONG
������Ժ������������ܵ�������������������������գ�
ľ������ʰ��������۸����ڵ����飬����Ϊл��������˵��
�����һ�ɸߵ�ʯ������ƽ̨�ϣ��ϸ����ܻ�ɫ�����߶����ߴ���
ΰ���������
LONG
  );
  set("exits",([
         "north":__DIR__"tiankuang.c",
         "south":__DIR__"renan.c",
         "east" :__DIR__"dongbei.c",
         "west" :__DIR__"xibei.c",
               ]));
        set("objects", ([
                __DIR__"npc/daoshi" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}