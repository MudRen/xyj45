// 
// 

inherit ROOM;
void create()
{
        set("short", "��ҩ��");
        set("long", @LONG
һ��Ũ�ҵ��в�ҩ��ζ���˱Ƕ�����ǽ��һ��С¯��¯��һ�����ڵĴɹ�
����߲߲��ð����������Ȼ�ڼ���ҩ�ġ���һ������һ����ɫ��ľ�������
�����Ĵ������ľϻ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"cx3",
]));
        set("objects", ([
        __DIR__"npc/medman": 1,
                        ]) );
        setup();
}
void init()
{
	add_action("do_soup","����");
	add_action("do_soup","cook");
}

int do_soup()
{
object ob1,ob2,ob3,ob4,ob5,ob6;
object me;
me = this_player();
ob1 = present("pilosulae",me);
ob2 = present("dioscoreae",me);
ob3 = present("codonopsis",me);
ob4 = present("astragalt",me);
ob5 = present("lycii",me);
ob6 = present("freshfish",me);
if( ob1 && ob2 && ob3 && ob4 && ob5 && ob6 )
{
message_vision("$N��һ�����һЩ��ҩ����ɹ��У�����������\n",me);
destruct(ob1);
destruct(ob2);
destruct(ob3);
destruct(ob4);
destruct(ob5);
destruct(ob6);
call_out("give_soup",random(5)+1,me);
return 1;
}
return 0;
}

int give_soup(object me)
{
object soup;
if(me) 
if( environment(me) == this_object())
{
soup = new(__DIR__"obj/med");
if(soup->move(me))
message_vision("$N�����õĵ��鲹Ѫ�������ڻ��\n",me);
}
return 1;
}