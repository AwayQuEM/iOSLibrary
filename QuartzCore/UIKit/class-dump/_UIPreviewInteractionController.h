//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPreviewInteractionDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "_UIPreviewActionsControllerDelegate.h"

@class NSString, UIGestureRecognizer, UIPreviewInteraction, UIView, UIViewController, _UIInteractionEffect_deprecated, _UIPreviewActionsController, _UIPreviewInteractionCommitTransition, _UIPreviewInteractionDismissTransition, _UIPreviewInteractionGestureRecognizer, _UIPreviewInteractionPresentationTransition, _UIPreviewPresentationController2, _UISteadyTouchForceGestureRecognizer, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate>
{
    _Bool _performingPreviewTransition;
    _Bool _commitTransitionScheduled;
    _Bool _performingCommitTransition;
    _Bool _hasTransitionedToPreview;
    id <_UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    id <_UIPreviewInteractionTouchForceProviding> _presentedViewTouchForceProvider;
    id <_UIPreviewInteractionTouchForceProviding> _pausingTouchForceProvider;
    _UIPreviewInteractionGestureRecognizer *_revealGestureRecognizer;
    _UIPreviewInteractionGestureRecognizer *_previewGestureRecognizer;
    _UISteadyTouchForceGestureRecognizer *_steadyTouchForceGestureRecognizer;
    UIViewController *_currentPreviewViewController;
    _UIPreviewPresentationController2 *_currentPresentationController;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
    _UIPreviewInteractionPresentationTransition *_currentPresentationTransition;
    _UIPreviewInteractionDismissTransition *_currentDismissTransition;
    _UIPreviewInteractionCommitTransition *_currentCommitTransition;
    _UIInteractionEffect_deprecated *_currentInteractionEffect;
    _UITouchesObservingGestureRecognizer *_gestureRecognizerForPreviewActions;
    _UIPreviewActionsController *_previewActionsController;
    id <UIViewControllerPreviewing_Internal> _currentPreviewingContext;
    struct CGPoint _location;
    struct CGPoint _initialLocationForPreviewActionsPanning;
}

@property(nonatomic) __weak id <UIViewControllerPreviewing_Internal> currentPreviewingContext; // @synthesize currentPreviewingContext=_currentPreviewingContext;
@property(nonatomic) struct CGPoint initialLocationForPreviewActionsPanning; // @synthesize initialLocationForPreviewActionsPanning=_initialLocationForPreviewActionsPanning;
@property(retain, nonatomic) _UIPreviewActionsController *previewActionsController; // @synthesize previewActionsController=_previewActionsController;
@property(retain, nonatomic) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions; // @synthesize gestureRecognizerForPreviewActions=_gestureRecognizerForPreviewActions;
@property(retain, nonatomic) _UIInteractionEffect_deprecated *currentInteractionEffect; // @synthesize currentInteractionEffect=_currentInteractionEffect;
@property(nonatomic) _Bool hasTransitionedToPreview; // @synthesize hasTransitionedToPreview=_hasTransitionedToPreview;
@property(nonatomic) _Bool performingCommitTransition; // @synthesize performingCommitTransition=_performingCommitTransition;
@property(nonatomic) _Bool commitTransitionScheduled; // @synthesize commitTransitionScheduled=_commitTransitionScheduled;
@property(nonatomic) _Bool performingPreviewTransition; // @synthesize performingPreviewTransition=_performingPreviewTransition;
@property(retain, nonatomic) _UIPreviewInteractionCommitTransition *currentCommitTransition; // @synthesize currentCommitTransition=_currentCommitTransition;
@property(retain, nonatomic) _UIPreviewInteractionDismissTransition *currentDismissTransition; // @synthesize currentDismissTransition=_currentDismissTransition;
@property(retain, nonatomic) _UIPreviewInteractionPresentationTransition *currentPresentationTransition; // @synthesize currentPresentationTransition=_currentPresentationTransition;
@property(retain, nonatomic) id <_UIPreviewInteractionHighlighting> currentHighlighter; // @synthesize currentHighlighter=_currentHighlighter;
@property(retain, nonatomic) _UIPreviewPresentationController2 *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
@property(retain, nonatomic) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer; // @synthesize steadyTouchForceGestureRecognizer=_steadyTouchForceGestureRecognizer;
@property(retain, nonatomic) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer; // @synthesize previewGestureRecognizer=_previewGestureRecognizer;
@property(retain, nonatomic) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer; // @synthesize revealGestureRecognizer=_revealGestureRecognizer;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> pausingTouchForceProvider; // @synthesize pausingTouchForceProvider=_pausingTouchForceProvider;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> presentedViewTouchForceProvider; // @synthesize presentedViewTouchForceProvider=_presentedViewTouchForceProvider;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) __weak id <_UIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(struct CGVector)arg2 withVelocity:(struct CGVector)arg3;
- (void)didDismissPreviewActionsController:(id)arg1;
- (void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
- (struct CGSize)maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
- (struct CGPoint)initialPlatterPositionForPreviewActionsController:(id)arg1;
- (void)_handlePreviewActionsGesture:(id)arg1;
- (void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id *)arg1 sourceRect:(struct CGRect *)arg2;
- (void)_finalizeInteractivePreview;
- (void)_resetCustomPresentationHooks;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (void)_preparePreviewPresentationControllerIfNeeded:(id)arg1;
- (id)_preferredNavigationControllerForCommitTransition;
- (void)_stopCurrentInteractionEffect;
- (id)_preparedInteractionEffect;
- (_Bool)_previewingIsPossibleForView:(id)arg1;
- (_Bool)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleSteadyTouchForceGesture:(id)arg1;
- (_Bool)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
- (void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
- (id)_newHighlighterForPreviewingContext:(id)arg1;
- (void)_revertInteractionEffectToStartState;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissPreviewViewControllerIfNeeded;
- (_Bool)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_previewInteractionShouldEndOnGestureCompletion:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)commitInteractivePreview;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

