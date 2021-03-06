//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIFeedbackEngine.h>

#import "_UIFeedbackPlayer.h"

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer>
{
    CDUnknownBlockType _invalidationBlock;
    NSCountedSet *_warmSSIDs;
    NSCountedSet *_suspendedSSIDs;
}

+ (_Bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;
@property(readonly, nonatomic) NSCountedSet *suspendedSSIDs; // @synthesize suspendedSSIDs=_suspendedSSIDs;
@property(readonly, nonatomic) NSCountedSet *warmSSIDs; // @synthesize warmSSIDs=_warmSSIDs;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_playFeedbackNow:(id)arg1 withOptions:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateSuspension;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_startWarmingFeedbacks:(id)arg1;
- (void)_performForEachSSIDsInFeedbacks:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(_Bool)arg2;

@end

