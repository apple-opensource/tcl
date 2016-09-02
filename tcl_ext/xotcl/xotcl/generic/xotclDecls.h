/*
 * xotclDecls.h --
 *
 *	Declarations of functions in the platform independent public XOTcl API.
 *
 * Copyright (c) 1998-1999 by XXXX
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#ifndef _XOTCLDECLS
#define _XOTCLDECLS

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the xotcl.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */

/* 0 */
EXTERN int		Xotcl_Init _ANSI_ARGS_((Tcl_Interp * interp));
/* Slot 1 is reserved */
/* 2 */
EXTERN struct XOTcl_Class* XOTclIsClass _ANSI_ARGS_((Tcl_Interp* in, 
				ClientData cd));
/* Slot 3 is reserved */
/* 4 */
EXTERN struct XOTcl_Object* XOTclGetObject _ANSI_ARGS_((Tcl_Interp* in, 
				char* name));
/* 5 */
EXTERN struct XOTcl_Class* XOTclGetClass _ANSI_ARGS_((Tcl_Interp* in, 
				char* name));
/* 6 */
EXTERN int		XOTclCreateObject _ANSI_ARGS_((Tcl_Interp* in, 
				Tcl_Obj* name, struct XOTcl_Class* cl));
/* Slot 7 is reserved */
/* 8 */
EXTERN int		XOTclCreateClass _ANSI_ARGS_((Tcl_Interp* in, 
				Tcl_Obj* name, struct XOTcl_Class* cl));
/* 9 */
EXTERN int		XOTclDeleteObject _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Object* obj));
/* 10 */
EXTERN int		XOTclDeleteClass _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Class* cl));
/* 11 */
EXTERN void		XOTclAddPMethod _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Object* obj, char* nm, 
				Tcl_ObjCmdProc* proc, ClientData cd, 
				Tcl_CmdDeleteProc* dp));
/* 12 */
EXTERN void		XOTclAddIMethod _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Class* cl, char* nm, 
				Tcl_ObjCmdProc* proc, ClientData cd, 
				Tcl_CmdDeleteProc* dp));
/* 13 */
EXTERN void		XOTclRemovePMethod _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Object* obj, char* nm));
/* 14 */
EXTERN void		XOTclRemoveIMethod _ANSI_ARGS_((Tcl_Interp* in, 
				struct XOTcl_Class* cl, char* nm));
/* 15 */
EXTERN Tcl_Obj*		XOTclOSetInstVar _ANSI_ARGS_((
				struct XOTcl_Object* obj, Tcl_Interp* in, 
				Tcl_Obj* name, Tcl_Obj* value, int flgs));
/* 16 */
EXTERN Tcl_Obj*		XOTclOGetInstVar _ANSI_ARGS_((
				struct XOTcl_Object* obj, Tcl_Interp* in, 
				Tcl_Obj* name, int flgs));
/* 17 */
EXTERN int		XOTclInstVar _ANSI_ARGS_((struct XOTcl_Object* obj, 
				Tcl_Interp* in, char* name, char* destName));
/* Slot 18 is reserved */
/* 19 */
EXTERN Tcl_Obj*		XOTclOSetInstVar2 _ANSI_ARGS_((
				struct XOTcl_Object* obj, Tcl_Interp* in, 
				Tcl_Obj* name1, Tcl_Obj* name2, 
				Tcl_Obj* value, int flgs));
/* 20 */
EXTERN Tcl_Obj*		XOTclOGetInstVar2 _ANSI_ARGS_((
				struct XOTcl_Object* obj, Tcl_Interp* in, 
				Tcl_Obj* name1, Tcl_Obj* name2, int flgs));
/* 21 */
EXTERN int		XOTclUnsetInstVar2 _ANSI_ARGS_((
				struct XOTcl_Object* obj, Tcl_Interp* in, 
				char* name1, char* name2, int flgs));
/* 22 */
EXTERN int		XOTcl_TraceObjCmd _ANSI_ARGS_((ClientData cd, 
				Tcl_Interp * in, int objc, 
				Tcl_Obj *CONST objv[]));
/* 23 */
EXTERN int		XOTclErrMsg _ANSI_ARGS_((Tcl_Interp* in, char* msg, 
				Tcl_FreeProc* type));
/* 24 */
EXTERN int		XOTclVarErrMsg _ANSI_ARGS_(TCL_VARARGS(Tcl_Interp *,in));
/* 25 */
EXTERN int		XOTclErrInProc _ANSI_ARGS_((Tcl_Interp * in, 
				Tcl_Obj* objName, Tcl_Obj* clName, 
				char* procName));
/* 26 */
EXTERN int		XOTclObjErrArgCnt _ANSI_ARGS_((Tcl_Interp * in, 
				Tcl_Obj * cmdname, char * arglist));
/* 27 */
EXTERN int		XOTclErrBadVal _ANSI_ARGS_((Tcl_Interp * in, 
				char * expected, char * value));
/* 28 */
EXTERN int		XOTclObjErrType _ANSI_ARGS_((Tcl_Interp * in, 
				Tcl_Obj * nm, char* wt));
/* 29 */
EXTERN void		XOTclStackTrace _ANSI_ARGS_((Tcl_Interp* in));
/* 30 */
EXTERN void		XOTclCallStackTrace _ANSI_ARGS_((Tcl_Interp* in));
/* 31 */
EXTERN void		XOTclDeprecatedMsg _ANSI_ARGS_((char* oldCmd, 
				char* newCmd));
/* 32 */
EXTERN void		XOTclSetObjClientData _ANSI_ARGS_((XOTcl_Object* obj, 
				ClientData data));
/* 33 */
EXTERN ClientData	XOTclGetObjClientData _ANSI_ARGS_((XOTcl_Object* obj));
/* 34 */
EXTERN void		XOTclSetClassClientData _ANSI_ARGS_((XOTcl_Class* cl, 
				ClientData data));
/* 35 */
EXTERN ClientData	XOTclGetClassClientData _ANSI_ARGS_((XOTcl_Class* cl));
/* 36 */
EXTERN void		XOTclRequireObjNamespace _ANSI_ARGS_((Tcl_Interp* in, 
				XOTcl_Object* obj));

typedef struct XotclStubHooks {
    struct XotclIntStubs *xotclIntStubs;
} XotclStubHooks;

typedef struct XotclStubs {
    int magic;
    struct XotclStubHooks *hooks;

    int (*xotcl_Init) _ANSI_ARGS_((Tcl_Interp * interp)); /* 0 */
    void *reserved1;
    struct XOTcl_Class* (*xOTclIsClass) _ANSI_ARGS_((Tcl_Interp* in, ClientData cd)); /* 2 */
    void *reserved3;
    struct XOTcl_Object* (*xOTclGetObject) _ANSI_ARGS_((Tcl_Interp* in, char* name)); /* 4 */
    struct XOTcl_Class* (*xOTclGetClass) _ANSI_ARGS_((Tcl_Interp* in, char* name)); /* 5 */
    int (*xOTclCreateObject) _ANSI_ARGS_((Tcl_Interp* in, Tcl_Obj* name, struct XOTcl_Class* cl)); /* 6 */
    void *reserved7;
    int (*xOTclCreateClass) _ANSI_ARGS_((Tcl_Interp* in, Tcl_Obj* name, struct XOTcl_Class* cl)); /* 8 */
    int (*xOTclDeleteObject) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Object* obj)); /* 9 */
    int (*xOTclDeleteClass) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Class* cl)); /* 10 */
    void (*xOTclAddPMethod) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Object* obj, char* nm, Tcl_ObjCmdProc* proc, ClientData cd, Tcl_CmdDeleteProc* dp)); /* 11 */
    void (*xOTclAddIMethod) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Class* cl, char* nm, Tcl_ObjCmdProc* proc, ClientData cd, Tcl_CmdDeleteProc* dp)); /* 12 */
    void (*xOTclRemovePMethod) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Object* obj, char* nm)); /* 13 */
    void (*xOTclRemoveIMethod) _ANSI_ARGS_((Tcl_Interp* in, struct XOTcl_Class* cl, char* nm)); /* 14 */
    Tcl_Obj* (*xOTclOSetInstVar) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, Tcl_Obj* name, Tcl_Obj* value, int flgs)); /* 15 */
    Tcl_Obj* (*xOTclOGetInstVar) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, Tcl_Obj* name, int flgs)); /* 16 */
    int (*xOTclInstVar) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, char* name, char* destName)); /* 17 */
    void *reserved18;
    Tcl_Obj* (*xOTclOSetInstVar2) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, Tcl_Obj* name1, Tcl_Obj* name2, Tcl_Obj* value, int flgs)); /* 19 */
    Tcl_Obj* (*xOTclOGetInstVar2) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, Tcl_Obj* name1, Tcl_Obj* name2, int flgs)); /* 20 */
    int (*xOTclUnsetInstVar2) _ANSI_ARGS_((struct XOTcl_Object* obj, Tcl_Interp* in, char* name1, char* name2, int flgs)); /* 21 */
    int (*xOTcl_TraceObjCmd) _ANSI_ARGS_((ClientData cd, Tcl_Interp * in, int objc, Tcl_Obj *CONST objv[])); /* 22 */
    int (*xOTclErrMsg) _ANSI_ARGS_((Tcl_Interp* in, char* msg, Tcl_FreeProc* type)); /* 23 */
    int (*xOTclVarErrMsg) _ANSI_ARGS_(TCL_VARARGS(Tcl_Interp *,in)); /* 24 */
    int (*xOTclErrInProc) _ANSI_ARGS_((Tcl_Interp * in, Tcl_Obj* objName, Tcl_Obj* clName, char* procName)); /* 25 */
    int (*xOTclObjErrArgCnt) _ANSI_ARGS_((Tcl_Interp * in, Tcl_Obj * cmdname, char * arglist)); /* 26 */
    int (*xOTclErrBadVal) _ANSI_ARGS_((Tcl_Interp * in, char * expected, char * value)); /* 27 */
    int (*xOTclObjErrType) _ANSI_ARGS_((Tcl_Interp * in, Tcl_Obj * nm, char* wt)); /* 28 */
    void (*xOTclStackTrace) _ANSI_ARGS_((Tcl_Interp* in)); /* 29 */
    void (*xOTclCallStackTrace) _ANSI_ARGS_((Tcl_Interp* in)); /* 30 */
    void (*xOTclDeprecatedMsg) _ANSI_ARGS_((char* oldCmd, char* newCmd)); /* 31 */
    void (*xOTclSetObjClientData) _ANSI_ARGS_((XOTcl_Object* obj, ClientData data)); /* 32 */
    ClientData (*xOTclGetObjClientData) _ANSI_ARGS_((XOTcl_Object* obj)); /* 33 */
    void (*xOTclSetClassClientData) _ANSI_ARGS_((XOTcl_Class* cl, ClientData data)); /* 34 */
    ClientData (*xOTclGetClassClientData) _ANSI_ARGS_((XOTcl_Class* cl)); /* 35 */
    void (*xOTclRequireObjNamespace) _ANSI_ARGS_((Tcl_Interp* in, XOTcl_Object* obj)); /* 36 */
} XotclStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern XotclStubs *xotclStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_XOTCL_STUBS) && !defined(USE_XOTCL_STUB_PROCS)

/*
 * Inline function declarations:
 */

#ifndef Xotcl_Init
#define Xotcl_Init \
	(xotclStubsPtr->xotcl_Init) /* 0 */
#endif
/* Slot 1 is reserved */
#ifndef XOTclIsClass
#define XOTclIsClass \
	(xotclStubsPtr->xOTclIsClass) /* 2 */
#endif
/* Slot 3 is reserved */
#ifndef XOTclGetObject
#define XOTclGetObject \
	(xotclStubsPtr->xOTclGetObject) /* 4 */
#endif
#ifndef XOTclGetClass
#define XOTclGetClass \
	(xotclStubsPtr->xOTclGetClass) /* 5 */
#endif
#ifndef XOTclCreateObject
#define XOTclCreateObject \
	(xotclStubsPtr->xOTclCreateObject) /* 6 */
#endif
/* Slot 7 is reserved */
#ifndef XOTclCreateClass
#define XOTclCreateClass \
	(xotclStubsPtr->xOTclCreateClass) /* 8 */
#endif
#ifndef XOTclDeleteObject
#define XOTclDeleteObject \
	(xotclStubsPtr->xOTclDeleteObject) /* 9 */
#endif
#ifndef XOTclDeleteClass
#define XOTclDeleteClass \
	(xotclStubsPtr->xOTclDeleteClass) /* 10 */
#endif
#ifndef XOTclAddPMethod
#define XOTclAddPMethod \
	(xotclStubsPtr->xOTclAddPMethod) /* 11 */
#endif
#ifndef XOTclAddIMethod
#define XOTclAddIMethod \
	(xotclStubsPtr->xOTclAddIMethod) /* 12 */
#endif
#ifndef XOTclRemovePMethod
#define XOTclRemovePMethod \
	(xotclStubsPtr->xOTclRemovePMethod) /* 13 */
#endif
#ifndef XOTclRemoveIMethod
#define XOTclRemoveIMethod \
	(xotclStubsPtr->xOTclRemoveIMethod) /* 14 */
#endif
#ifndef XOTclOSetInstVar
#define XOTclOSetInstVar \
	(xotclStubsPtr->xOTclOSetInstVar) /* 15 */
#endif
#ifndef XOTclOGetInstVar
#define XOTclOGetInstVar \
	(xotclStubsPtr->xOTclOGetInstVar) /* 16 */
#endif
#ifndef XOTclInstVar
#define XOTclInstVar \
	(xotclStubsPtr->xOTclInstVar) /* 17 */
#endif
/* Slot 18 is reserved */
#ifndef XOTclOSetInstVar2
#define XOTclOSetInstVar2 \
	(xotclStubsPtr->xOTclOSetInstVar2) /* 19 */
#endif
#ifndef XOTclOGetInstVar2
#define XOTclOGetInstVar2 \
	(xotclStubsPtr->xOTclOGetInstVar2) /* 20 */
#endif
#ifndef XOTclUnsetInstVar2
#define XOTclUnsetInstVar2 \
	(xotclStubsPtr->xOTclUnsetInstVar2) /* 21 */
#endif
#ifndef XOTcl_TraceObjCmd
#define XOTcl_TraceObjCmd \
	(xotclStubsPtr->xOTcl_TraceObjCmd) /* 22 */
#endif
#ifndef XOTclErrMsg
#define XOTclErrMsg \
	(xotclStubsPtr->xOTclErrMsg) /* 23 */
#endif
#ifndef XOTclVarErrMsg
#define XOTclVarErrMsg \
	(xotclStubsPtr->xOTclVarErrMsg) /* 24 */
#endif
#ifndef XOTclErrInProc
#define XOTclErrInProc \
	(xotclStubsPtr->xOTclErrInProc) /* 25 */
#endif
#ifndef XOTclObjErrArgCnt
#define XOTclObjErrArgCnt \
	(xotclStubsPtr->xOTclObjErrArgCnt) /* 26 */
#endif
#ifndef XOTclErrBadVal
#define XOTclErrBadVal \
	(xotclStubsPtr->xOTclErrBadVal) /* 27 */
#endif
#ifndef XOTclObjErrType
#define XOTclObjErrType \
	(xotclStubsPtr->xOTclObjErrType) /* 28 */
#endif
#ifndef XOTclStackTrace
#define XOTclStackTrace \
	(xotclStubsPtr->xOTclStackTrace) /* 29 */
#endif
#ifndef XOTclCallStackTrace
#define XOTclCallStackTrace \
	(xotclStubsPtr->xOTclCallStackTrace) /* 30 */
#endif
#ifndef XOTclDeprecatedMsg
#define XOTclDeprecatedMsg \
	(xotclStubsPtr->xOTclDeprecatedMsg) /* 31 */
#endif
#ifndef XOTclSetObjClientData
#define XOTclSetObjClientData \
	(xotclStubsPtr->xOTclSetObjClientData) /* 32 */
#endif
#ifndef XOTclGetObjClientData
#define XOTclGetObjClientData \
	(xotclStubsPtr->xOTclGetObjClientData) /* 33 */
#endif
#ifndef XOTclSetClassClientData
#define XOTclSetClassClientData \
	(xotclStubsPtr->xOTclSetClassClientData) /* 34 */
#endif
#ifndef XOTclGetClassClientData
#define XOTclGetClassClientData \
	(xotclStubsPtr->xOTclGetClassClientData) /* 35 */
#endif
#ifndef XOTclRequireObjNamespace
#define XOTclRequireObjNamespace \
	(xotclStubsPtr->xOTclRequireObjNamespace) /* 36 */
#endif

#endif /* defined(USE_XOTCL_STUBS) && !defined(USE_XOTCL_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* _XOTCLDECLS */

