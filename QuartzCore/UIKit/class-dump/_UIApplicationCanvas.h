//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UICanvas.h>

#import "_UICanvasLifecycleStateTransitioning.h"
#import "_UICanvasUILifecycleStateMonitoring.h"

@class NSString, UIStatusBarWindow, _UICanvasLifecycleMonitor;

@interface _UIApplicationCanvas : _UICanvas <_UICanvasUILifecycleStateMonitoring, _UICanvasLifecycleStateTransitioning>
{
    _UICanvasLifecycleMonitor *_lifecycleMonitor;
    _Bool _suspendedEventsOnly;
    _Bool _suspendedUnderLock;
    _Bool _respondingToLifecycleEvent;
    _Bool runningInTaskSwitcher;
}

+ (id)_settingsDiffActions;
+ (id)mostActiveCanvas;
+ (id)canvases;
@property(nonatomic, getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:) _Bool respondingToLifecycleEvent; // @synthesize respondingToLifecycleEvent=_respondingToLifecycleEvent;
@property(nonatomic, getter=_runningInTaskSwitcher, setter=_setRunningInTaskSwitcher:) _Bool runningInTaskSwitcher; // @synthesize runningInTaskSwitcher;
@property(nonatomic, getter=_suspendedUnderLock, setter=_setSuspendedUnderLock:) _Bool suspendedUnderLock; // @synthesize suspendedUnderLock=_suspendedUnderLock;
@property(nonatomic, getter=_suspendedEventsOnly, setter=_setSuspendedEventsOnly:) _Bool suspendedEventsOnly; // @synthesize suspendedEventsOnly=_suspendedEventsOnly;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_hasLifecycle) _Bool hasLifecycle;
- (void)_setOverscanCompensation:(long long)arg1;
- (id)initWithScene:(id)arg1;
- (void)_willAttach;
- (void)_willResignActive;
@property(readonly, nonatomic) long long state;
- (void)forceDeactivateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transitionLifecycleStateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isMainSceneCanvas;
@property(readonly, nonatomic) UIStatusBarWindow *statusBarWindow;

// Remaining properties
@property(nonatomic, getter=_isActive, setter=_setIsActive:) _Bool active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

