//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIKeyboardTextSelectionGestureCluster.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureCluster : _UIKeyboardTextSelectionGestureCluster
{
}

- (void)oneFingerForcePress:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;
- (_Bool)enclosingScrollViewIsScrolling;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)owner;

@end

