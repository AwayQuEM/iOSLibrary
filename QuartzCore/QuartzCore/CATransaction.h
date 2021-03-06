#import <Foundation/NSObject.h>


@interface CATransaction : NSObject {
}

+ (void)setValue:(id)arg1 forKey:(id)arg2;

+ (id)valueForKey:(id)arg1;

+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;

+ (CDUnknownBlockType)completionBlock;

+ (void)setDisableActions:(_Bool)arg1;

+ (_Bool)disableActions;

+ (void)setAnimationTimingFunction:(id)arg1;

+ (id)animationTimingFunction;

+ (void)setAnimationDuration:(double)arg1;

+ (double)animationDuration;

+ (void)unlock;

+ (void)lock;

+ (void)flush;

+ (void)commit;

+ (void)begin;

+ (void)assertInactive;

+ (unsigned int)generateSeed;

+ (void)setLowLatency:(_Bool)arg1;

+ (_Bool)lowLatency;

+ (void)setInputTime:(double)arg1;

+ (double)inputTime;

+ (void)setDisableRunLoopObserverCommits:(_Bool)arg1;

+ (_Bool)disableRunLoopObserverCommits;

+ (void)setEarliestAutomaticCommitTime:(double)arg1;

+ (double)earliestAutomaticCommitTime;

+ (void)setCommitTime:(double)arg1;

+ (double)commitTime;

+ (void)setAnimatesFromModelValues:(_Bool)arg1;

+ (_Bool)animatesFromModelValues;

+ (unsigned int)currentState;

+ (void)synchronize;

+ (void)activateBackground:(_Bool)arg1;

+ (void)activate;

+ (void)setPresentationHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

+ (int)currentPhase;

+ (void)addCommitHandler:(CDUnknownBlockType)arg1 forPhase:(int)arg2;

+ (void)setCommitHandler:(CDUnknownBlockType)arg1;

+ (CDUnknownBlockType)animator;

+ (void)popAnimator;

+ (void)pushAnimator:(CDUnknownBlockType)arg1;

+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;

@end

