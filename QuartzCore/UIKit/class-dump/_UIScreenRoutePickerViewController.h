//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertControllerContaining.h"

@class NSObject<OS_dispatch_semaphore>, NSString, UIAlertController, _UIResilientRemoteViewContainerViewController;

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining>
{
    UIAlertController *_alertController;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

- (void).cxx_destruct;
- (void)setModalPresentationStyle:(long long)arg1;
- (long long)modalPresentationStyle;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setCurrentOutputDeviceEnabled:(_Bool)arg1;
- (void)disconnectRoute;
- (id)remoteViewController;
- (void)_setChildViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

