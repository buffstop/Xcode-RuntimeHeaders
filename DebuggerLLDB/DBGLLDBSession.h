/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DBGDebugSession.h"

#import "DBGDebugSessionBreakpointLifeCycleDelegate-Protocol.h"
#import "IDEConsoleAdaptorDelegateProtocol-Protocol.h"

@class DBGLLDBLauncher, DVTDispatchLock, NSMutableArray, NSMutableString;

// Not exported
@interface DBGLLDBSession : DBGDebugSession <IDEConsoleAdaptorDelegateProtocol, DBGDebugSessionBreakpointLifeCycleDelegate>
{
    struct SBTarget _lldbTarget;
    struct auto_ptr<lldb::SBBroadcaster> _broadcasterAP;
    NSMutableArray *_resumeActions;
    NSMutableArray *_threadActions;
    DVTDispatchLock *_actionsLock;
    struct _opaque_pthread_t *_sessionThread;
    BOOL _isLongRunningConsoleCommand;
    struct dispatch_queue_s *_isLongRunningConsoleCommandQueue;
    BOOL _profilingEnabled;
    unsigned long long _previousHostUserTicks;
    unsigned long long _previousHostSystemTicks;
    unsigned long long _previousHostIdleTicks;
    unsigned long long _totalElapsedMicroSec;
    unsigned long long _previousElapsedMicroSec;
    unsigned long long _previousUsedMicroSec;
    struct __CFDictionary *_previousUsedMicroSecForThreadTable;
    NSMutableString *_previousProfileDataString;
    BOOL _isTracingOnDeviceAndTargetGotJetsam;
    int _initialProfileScanType;
    BOOL _targetShouldNotAutoContinue;
    BOOL _breakpointHit;
    BOOL _pauseRequested;
    NSMutableArray *_expressionsToRun;
    NSMutableArray *_callWhenStopped;
}

@property(retain) NSMutableArray *callWhenStopped; // @synthesize callWhenStopped=_callWhenStopped;
@property(retain) NSMutableArray *expressionsToRun; // @synthesize expressionsToRun=_expressionsToRun;
@property BOOL pauseRequested; // @synthesize pauseRequested=_pauseRequested;
@property BOOL breakpointHit; // @synthesize breakpointHit=_breakpointHit;
@property int initialProfileScanType; // @synthesize initialProfileScanType=_initialProfileScanType;
@property(nonatomic, getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property BOOL targetShouldNotAutoContinue; // @synthesize targetShouldNotAutoContinue=_targetShouldNotAutoContinue;
@property BOOL isTracingOnDeviceAndTargetGotJetsam; // @synthesize isTracingOnDeviceAndTargetGotJetsam=_isTracingOnDeviceAndTargetGotJetsam;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_lldbProcessPlugnPacketSend:(const char *)arg1;
- (void)primitiveInvalidate;
- (id)logSuffix;
- (BOOL)shouldIgnoreSigTermKill;
- (void)_runPendingExpressionsAndPurgeList;
- (void)_refreshThreadListAndUpdateCurrentThread:(int)arg1;
- (void)assertIsLLDBSessionThread;
- (void)_handleThreadEvent:(struct SBEvent)arg1;
- (id)dbgLLDBProcess;
- (BOOL)supportsSteppingIntoCallSymbol;
- (void)appendProfileDataString:(id)arg1;
- (void)processProfileDataString:(id)arg1;
- (id)_stringFromHexString:(id)arg1;
- (void)terminateCurrentDebuggerCommandIfNeeded;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (BOOL)consoleShouldTrackInputHistory;
- (void)loadDebugSymbolsForSharedLibrary:(id)arg1;
- (struct SBBreakpointLocation)_sbBreakpointLocationForIDEBreakpointLocation:(id)arg1;
- (void)_handleBreakpointLocationEnablementChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationEnablementChanged:(id)arg1;
- (void)_handleBreakpointLocationIgnoreCountChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationIgnoreCount:(id)arg1;
- (void)_handleBreakpointLocationConditionChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationConditionChanged:(id)arg1;
- (void)_handleBreakpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)_handleBreakpointIgnoreCountChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointIgnoreCountChanged:(id)arg1;
- (void)_handleBreakpointConditionChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointConditionChanged:(id)arg1;
- (void)_logBreakpointState:(struct SBBreakpoint)arg1 usingPrefix:(id)arg2;
- (void)_handleWatchpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)watchpointEnablementChanged:(id)arg1;
- (void)_handleActivationStateChangedFromSessionThread:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)_deleteBreakpointFromLLDBSessionThread:(id)arg1 breakpointLocations:(id)arg2;
- (void)deleteBreakpoint:(id)arg1;
- (void)_handleBreakpointLocationsRemovedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointLocationsAddedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointRemovedEventFromLLDB:(struct SBBreakpoint)arg1;
- (id)_breakpointLocationFromSBBreakpointLocation:(struct SBBreakpointLocation)arg1;
- (void)_handleBreakpointAddedEventFromLLDB:(struct SBBreakpoint)arg1;
- (void)_deleteWatchpointFromLLDBSessionThread:(id)arg1;
- (void)deleteWatchpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromAddressBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromExceptionBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromTestFailureBreakpoint:(id)arg1;
- (struct SBBreakpoint)_sbBreakpointForSymbolsNames:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromSymbolicBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromFileBreakpoint:(id)arg1;
- (void)_createBreakpointIfNecessaryFromLLDBSessionThread:(id)arg1;
- (void)createBreakpointIfNecessary:(id)arg1;
- (void)_evaluateExpressionFromSessionThread:(id)arg1;
- (void)evaluateExpression:(id)arg1;
- (void)deregisterProfileDataObserver:(id)arg1;
- (void)registerProfileDataObserver:(id)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1 updateLLDB:(BOOL)arg2;
- (id)commandsExpectingExpressions;
- (void)_delayedSetThreadsNil;
- (void)_invalidateObjectsFromMainThread:(id)arg1;
- (void)_markObjectsForInvalidationFromSessionThread:(id)arg1;
- (void)safelyInvalidateLLDBInvalidatableObjects:(id)arg1;
- (void)_quitWatchdogOnProcessState:(int *)arg1 forceQuit:(BOOL)arg2;
- (void)_cancelAndClearAllSessionThreadActionsByFirstTakingActionsLock;
- (void)_cancelAndClearAllSessionThreadActionsWithActionsLockAlreadyTaken;
- (BOOL)handleNextActionWithState:(int *)arg1 withRunPending:(char *)arg2;
- (void)addSessionThreadAction:(id)arg1;
- (void)completeString:(id)arg1 resultHandler:(id)arg2;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(id)arg3;
- (id)requestDataContainerForSymbol:(id)arg1 atLocation:(id)arg2;
- (void)_performBreakpointActions:(id)arg1 frame:(struct SBFrame)arg2;
- (void)_removeBreakpointHitCallback:(unsigned long long)arg1;
- (void)_addBreakpointHitCallback:(struct SBBreakpoint)arg1;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
- (BOOL)supportsPCAnnotationDragging;
- (BOOL)supportsMultiplePCAnnotation;
- (id)outputForDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 frameID:(unsigned long long)arg3 autoConfirm:(BOOL)arg4 outputToConsole:(BOOL)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 frameID:(unsigned long long)arg3 autoConfirm:(BOOL)arg4;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 frameID:(unsigned long long)arg3;
- (void)_queueCallForStopped:(id)arg1;
- (void)_doRequestFetchEventWork;
- (void)_doRequestFetchEvent;
- (void)requestFetchEvent;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStop;
- (void)requestDetach;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOut;
- (void)requestStepOverInstruction;
- (void)requestStepOverLine;
- (void)requestStepIntoInstruction;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepIn;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3 location:(id)arg4;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3;
- (void)_setSessionThreadID:(struct _opaque_pthread_t *)arg1;
- (BOOL)currentThreadIsSessionThread;
- (void)trackProcess;
- (void)_setLoggingCallback;
- (void)setTarget:(struct SBTarget)arg1;
@property(readonly) DBGLLDBLauncher *launcher;
- (id)initWithDebugLauncher:(id)arg1;

@end
