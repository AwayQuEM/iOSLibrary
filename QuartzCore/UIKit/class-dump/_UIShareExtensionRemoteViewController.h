//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "_UIShareExtensionHost.h"

@class NSExtension, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UIShareExtensionRemoteViewController : _UIRemoteViewController <_UIShareExtensionHost>
{
    id <_UIShareExtensionHost> _shareExtensionHost;
    NSExtension *_extension;
    id <NSCopying><NSObject> _extensionRequestIdentifier;
    NSUUID *_extensionServicePresentedActivityUUID;
}

+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSUUID *extensionServicePresentedActivityUUID; // @synthesize extensionServicePresentedActivityUUID=_extensionServicePresentedActivityUUID;
@property(copy, nonatomic) id <NSCopying><NSObject> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <_UIShareExtensionHost> shareExtensionHost; // @synthesize shareExtensionHost=_shareExtensionHost;
- (void).cxx_destruct;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(_Bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
- (void)shareExtensionServicePreferredContentSizeUpdated:(struct CGSize)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
- (id)shareExtensionService;
- (void)_cancelPendingExtensionRequests;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

