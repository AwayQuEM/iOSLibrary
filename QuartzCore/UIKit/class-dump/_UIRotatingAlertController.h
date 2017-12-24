//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController
{
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
    id <_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
}

@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) __weak id <_UIRotatingAlertControllerDelegate> rotatingSheetDelegate; // @synthesize rotatingSheetDelegate=_rotatingSheetDelegate;
- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)_didRotateAndLayout;
- (void)_updateSheetPositionAfterRotation;
- (void)willRotate:(id)arg1;
- (_Bool)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)doneWithSheet;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (_Bool)presentSheet;
- (void)dealloc;
- (id)init;

@end

