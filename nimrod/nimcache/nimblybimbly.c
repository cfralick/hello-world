/* Generated by Nimrod Compiler v0.9.2 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nimrod/0.9.2/libexec/lib -o /Users/cfralick/hello-world/nimrod/nimcache/nimblybimbly.o /Users/cfralick/hello-world/nimrod/nimcache/nimblybimbly.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tcell34049 tcell34049;
typedef struct TNimType TNimType;
typedef struct tcellseq34065 tcellseq34065;
typedef struct tgcheap36016 tgcheap36016;
typedef struct tcellset34061 tcellset34061;
typedef struct tpagedesc34057 tpagedesc34057;
typedef struct tmemregion17610 tmemregion17610;
typedef struct tsmallchunk16843 tsmallchunk16843;
typedef struct tllchunk17604 tllchunk17604;
typedef struct tbigchunk16845 tbigchunk16845;
typedef struct tintset16818 tintset16818;
typedef struct ttrunk16814 ttrunk16814;
typedef struct tavlnode17608 tavlnode17608;
typedef struct tgcstat36014 tgcstat36014;
typedef struct TNimNode TNimNode;
typedef struct tbasechunk16841 tbasechunk16841;
typedef struct tfreecell16833 tfreecell16833;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tcell34049 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq34065 {
NI Len;
NI Cap;
tcell34049** D;
};
struct tcellset34061 {
NI Counter;
NI Max;
tpagedesc34057* Head;
tpagedesc34057** Data;
};
typedef tsmallchunk16843* TY17622[512];
typedef ttrunk16814* ttrunkbuckets16816[256];
struct tintset16818 {
ttrunkbuckets16816 Data;
};
struct tmemregion17610 {
NI Minlargeobj;
NI Maxlargeobj;
TY17622 Freesmallchunks;
tllchunk17604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk16845* Freechunkslist;
tintset16818 Chunkstarts;
tavlnode17608* Root;
tavlnode17608* Deleted;
tavlnode17608* Last;
tavlnode17608* Freeavlnodes;
};
struct tgcstat36014 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap36016 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq34065 Zct;
tcellseq34065 Decstack;
tcellset34061 Cycleroots;
tcellseq34065 Tempstack;
NI Recgclock;
tmemregion17610 Region;
tgcstat36014 Stat;
};
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
typedef NI TY16821[8];
struct tpagedesc34057 {
tpagedesc34057* Next;
NI Key;
TY16821 Bits;
};
struct tbasechunk16841 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk16843 {
  tbasechunk16841 Sup;
tsmallchunk16843* Next;
tsmallchunk16843* Prev;
tfreecell16833* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk17604 {
NI Size;
NI Acc;
tllchunk17604* Next;
};
struct tbigchunk16845 {
  tbasechunk16841 Sup;
tbigchunk16845* Next;
tbigchunk16845* Prev;
NI Align;
NF64 Data;
};
struct ttrunk16814 {
ttrunk16814* Next;
NI Key;
TY16821 Bits;
};
typedef tavlnode17608* TY17614[2];
struct tavlnode17608 {
TY17614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tfreecell16833 {
tfreecell16833* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, readline_7724)(FILE* f);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell34049*, usrtocell_37443)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_38602)(tcell34049* c);
N_NOINLINE(void, addzct_37415)(tcellseq34065* s, tcell34049* c);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, nimblybimblyInit)(void);
N_NOINLINE(void, nimblybimblyDatInit)(void);
STRING_LITERAL(TMP120, "Who\'s a nimrod? ", 16);
STRING_LITERAL(TMP121, "That\'s right... ", 16);
STRING_LITERAL(TMP122, " is a nimrod", 12);
NimStringDesc* dumbass_67004;
extern TFrame* frameptr_10225;
extern tgcheap36016 gch_36042;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_10225;
	frameptr_10225 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_10225 = (*frameptr_10225).prev;
}

static N_INLINE(tcell34049*, usrtocell_37443)(void* usr) {
	tcell34049* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell34049*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell34049))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_38602)(tcell34049* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_37415(&gch_36042.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	nimln(696, "system.nim");
	nimln(696, "system.nim");
	if (!!((src == NIM_NIL))) goto LA2;
	{
		tcell34049* c;
		nimln(237, "gc.nim");
		c = usrtocell_37443(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA2: ;
	nimln(239, "gc.nim");
	nimln(696, "system.nim");
	nimln(696, "system.nim");
	if (!!(((*dest) == NIM_NIL))) goto LA6;
	{
		tcell34049* c;
		nimln(240, "gc.nim");
		c = usrtocell_37443((*dest));
		nimln(241, "gc.nim");
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA10;
		{
			nimln(242, "gc.nim");
			rtladdzct_38602(c);
		}
		LA10: ;
	}
	LA6: ;
	nimln(243, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);
}
int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	systemDatInit();
	nimblybimblyDatInit();
	initStackBottom();
	systemInit();
	nimblybimblyInit();
}
int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}
N_NOINLINE(void, nimblybimblyInit)(void) {
	nimfr("nimblybimbly", "nimblybimbly.nim")
	nimln(2, "nimblybimbly.nim");
	printf("%s\012", (((NimStringDesc*) &TMP120))->data);
	nimln(3, "nimblybimbly.nim");
	asgnRefNoCycle((void**) &dumbass_67004, readline_7724(stdin));
	nimln(4, "nimblybimbly.nim");
	printf("%s%s%s\012", (((NimStringDesc*) &TMP121))->data, (dumbass_67004)->data, (((NimStringDesc*) &TMP122))->data);
	popFrame();
}

N_NOINLINE(void, nimblybimblyDatInit)(void) {
}

