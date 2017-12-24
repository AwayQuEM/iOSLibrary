//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewing_Internal.h"
#import "_UIPreviewInteractionControllerDelegate.h"

@class NSString, UIGestureRecognizer, UIView, UIViewController, _UIPreviewInteractionController;

__attribute__((visibility("hidden")))
@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal>
{
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    UIViewController *_viewController;
    _UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

@property(retain, nonatomic) _UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
- (void).cxx_destruct;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id *)arg4;
- (void)unregister;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

