
inherit ROOM;

void create()
{
   set("short", "����");
	set("long", @LONG
���߽������������кö�������Ʒ���豸��С�����������ƽ  
����շ�¯�ȣ��廨���ţ�ʽ����ȫ���ԱߵĴ�ִ��У���������
ʽ����ɽ����ζ�����ֲ��ϣ���ζ��ƷӦ�о��С���ͷ���Ƴ�ʦ����
æ��æ�⣬��Ϊ׼��һ��������������! �ŵ���������ζ�Ĳ��㣬��
�Ķ��ӹ��๾���������!
LONG
	);
    set("exits", ([ 
    "west" :__DIR__"eat2",
    ]));
    set("objects", ([
        __DIR__"npc/obj/fire" : 1,
        __DIR__"npc/fochin" : 1,
    ]) );

	setup();
	replace_program(ROOM);
}