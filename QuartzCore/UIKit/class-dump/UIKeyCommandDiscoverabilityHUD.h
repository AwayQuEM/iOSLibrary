//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUD : NSObject
{
    NSTimer *_HUDPopTimer;
    _UIKeyCommandDiscoverabilityHUDWindow *_window;
    _Bool _commandKeyIsDown;
}

+ (id)sharedKeyCommandDiscoverabilityHUD;
- (void).cxx_destruct;
- (void)_dismissHUD;
- (void)_presentHUDWithKeyCommands:(id)arg1;
- (id)_performableKeyCommandsWithResponder:(id)arg1;
- (void)_HUDPopTimerFired:(id)arg1;
- (void)_applicationWillResignActive;
- (void)_didTakeScreenshot;
- (void)_scheduleHUDPresentation;
- (void)handlePhysicalKeyboardEvent:(id)arg1;
- (void)dealloc;

@end

