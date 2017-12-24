//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPreviewInteractionControllerDelegate_Private.h"

@class UIPreviewInteractionController, UIPreviewMenuItem, UIViewController;

@protocol UIPreviewInteractionControllerDelegate_Internal <UIPreviewInteractionControllerDelegate_Private>

@optional
@property(readonly, nonatomic) struct CGRect sourceRect;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (_Bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(UIPreviewInteractionController *)arg1;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 didSelectMenuItem:(UIPreviewMenuItem *)arg2;
@end

