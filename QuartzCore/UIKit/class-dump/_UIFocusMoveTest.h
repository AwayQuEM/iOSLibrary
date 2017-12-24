//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIFocusTest.h>

@interface _UIFocusMoveTest : _UIFocusTest
{
    unsigned long long _activeNumberOfIterations;
    unsigned long long _currentIteration;
    unsigned long long _currentMove;
    struct {
        unsigned int isPerformingFocusMovement:1;
        unsigned int delegateRespondsToWillStartIteration:1;
        unsigned int delegateRespondsToDidFinishIteration:1;
        unsigned int delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToNumberOfIterations:1;
        unsigned int dataSourceRespondsToMaximumNumberOfMovesDuringIteration:1;
        unsigned int dataSourceRespondsToDelayBeforeMoveDuringIteration:1;
        unsigned int dataSourceRespondsToHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToShouldResetFocusBeforeIteration:1;
    } _flags;
    _Bool _resetsFocusBeforeIterations;
    id <UIFocusEnvironment> _containerFocusEnvironment;
    unsigned long long _numberOfIterations;
    unsigned long long _maximumMovesPerIteration;
    double _movementDelay;
    unsigned long long _movementHeading;
    id <_UIFocusMoveTestDataSource> _dataSource;
}

@property(nonatomic) __weak id <_UIFocusMoveTestDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool resetsFocusBeforeIterations; // @synthesize resetsFocusBeforeIterations=_resetsFocusBeforeIterations;
@property(nonatomic) unsigned long long movementHeading; // @synthesize movementHeading=_movementHeading;
@property(nonatomic) double movementDelay; // @synthesize movementDelay=_movementDelay;
@property(nonatomic) unsigned long long maximumMovesPerIteration; // @synthesize maximumMovesPerIteration=_maximumMovesPerIteration;
@property(nonatomic) unsigned long long numberOfIterations; // @synthesize numberOfIterations=_numberOfIterations;
@property(nonatomic) __weak id <UIFocusEnvironment> containerFocusEnvironment; // @synthesize containerFocusEnvironment=_containerFocusEnvironment;
- (void).cxx_destruct;
- (_Bool)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)arg1;
- (unsigned long long)_dataSourceHeadingForMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (double)_dataSourceDelayBeforeMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2;
- (unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)arg1;
- (unsigned long long)_dataSourceNumberOfIterations;
- (void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3;
- (void)_notifyDelegateDidFinishIteration:(unsigned long long)arg1;
- (void)_notifyDelegateWillStartIteration:(unsigned long long)arg1;
@property(nonatomic) __weak id <_UIFocusMoveTestDelegate> delegate;
- (void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)arg1;
- (void)_performFocusMovement;
- (void)_performFocusMovementAfterDelayForMove:(unsigned long long)arg1 iteration:(unsigned long long)arg2;
- (void)main;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)initWithIdentifier:(id)arg1;

@end

