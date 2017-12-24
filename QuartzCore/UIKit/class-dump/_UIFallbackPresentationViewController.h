//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIApplicationRotationFollowingController.h>

@class UIWindow, _UIFallbackPresentationWindow;

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController
{
    _UIFallbackPresentationWindow *_presentationWindow;
    _Bool _hasPreservedKeyboardInputViews;
    _Bool _hasDismissCompletionHandler;
    UIWindow *_rotationDecider;
    CDUnknownBlockType _presentationPreparationBlock;
}

@property(nonatomic) _Bool hasDismissCompletionHandler; // @synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler;
@property(nonatomic) _Bool hasPreservedKeyboardInputViews; // @synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews;
@property(copy, nonatomic) CDUnknownBlockType presentationPreparationBlock; // @synthesize presentationPreparationBlock=_presentationPreparationBlock;
@property(retain, nonatomic) UIWindow *rotationDecider; // @synthesize rotationDecider=_rotationDecider;
- (void).cxx_destruct;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_restoreInputViewsAnimated:(_Bool)arg1;
- (void)_preserveInputViewsAnimated:(_Bool)arg1;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLoad;

@end

