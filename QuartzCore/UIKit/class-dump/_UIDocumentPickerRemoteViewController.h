//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "_UIDocumentPickerServiceInvalidating.h"
#import "_UIDocumentPickerViewControllerHost.h"

@class NSString, UIViewController<_UIDocumentPickerRemoteViewControllerContaining>;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>
{
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *_publicController;
    NSString *_identifier;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController; // @synthesize publicController=_publicController;
- (void).cxx_destruct;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_dismissViewController;
- (void)_didSelectURLBookmark:(id)arg1;
- (void)_didSelectURLWrapper:(id)arg1;
- (void)viewDidLoad;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

