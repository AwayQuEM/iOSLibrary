//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<UIForcePresentationController>, UIPresentationController<UIForcePresentationController>, UIPreviewMenuItem;

@protocol _UIForcePresentationControllerDelegate <NSObject>

@optional
- (void)forcePresentationControllerWantsToCommit:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationController:(UIPresentationController<UIForcePresentationController> *)arg1 didSelectMenuItem:(UIPreviewMenuItem *)arg2;
- (void)forcePresentationControllerDidDismiss:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationControllerWillDismiss:(UIPresentationController<UIForcePresentationController> *)arg1;
- (void)forcePresentationTransitionWillBegin:(NSObject<UIForcePresentationController> *)arg1;
@end

