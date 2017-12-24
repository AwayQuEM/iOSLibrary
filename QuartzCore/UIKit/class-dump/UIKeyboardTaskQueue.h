//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskEntry, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject
{
    _Bool _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    UIKeyboardTaskEntry *_mainThreadContinuation;
    NSArray *_activeOriginator;
}

@property(retain, nonatomic) NSArray *activeOriginator; // @synthesize activeOriginator=_activeOriginator;
@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (_Bool)isMainThreadExecutingTask;
- (void)performSingleTask:(CDUnknownBlockType)arg1;
- (void)waitUntilTaskIsFinished:(id)arg1;
- (void)performTask:(CDUnknownBlockType)arg1;
- (void)waitUntilAllTasksAreFinished;
- (void)addDeferredTask:(CDUnknownBlockType)arg1;
- (id)addAndReturnTask:(CDUnknownBlockType)arg1;
- (void)addTask:(CDUnknownBlockType)arg1;
- (void)promoteDeferredTaskIfIdle;
- (void)performDeferredTaskIfIdle;
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)finishExecution;
- (void)continueExecutionOnMainThread;
- (void)unlock;
- (_Bool)tryLockWhenReadyForMainThread;
- (void)lockWhenReadyForMainThread;
- (void)lock;
- (id)init;
- (void)dealloc;
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3;

@end

