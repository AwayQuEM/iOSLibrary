//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIWebViewportHandler : NSObject
{
    _Bool _initialConfigurationHasBeenSentToDelegate;
    struct _UIWebViewportConfiguration _defaultConfiguration;
    struct _UIWebViewportConfiguration _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    struct CGSize _availableViewSize;
    struct CGSize _viewportArgumentsSize;
    _Bool _widthIsDeviceWidth;
    _Bool _heightIsDeviceHeight;
    _Bool _classicViewportMode;
    id <_UIWebViewportHandlerDelegate> _delegate;
    struct CGRect _documentBounds;
}

@property(readonly, nonatomic, getter=isClassicViewportMode) _Bool classicViewportMode; // @synthesize classicViewportMode=_classicViewportMode;
@property(readonly, nonatomic) unsigned int webkitDefinedConfigurationFlags; // @synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags;
@property(readonly, nonatomic) struct CGSize availableViewSize; // @synthesize availableViewSize=_availableViewSize;
@property(readonly, nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) id <_UIWebViewportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)minimumScaleForViewSize:(struct CGSize)arg1;
- (double)integralScaleForScale:(double)arg1 keepingPointFixed:(struct CGPoint *)arg2;
- (double)integralInitialScale;
- (float)viewportHeight;
- (float)viewportWidth;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration *)arg1;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration *)arg1;
- (void)clearWebKitViewportConfigurationFlags;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 viewportFit:(id)arg7;
- (void)_resolveViewSizeRelativeLengths;
- (void)setAvailableViewSize:(struct CGSize)arg1 updateConfigurationSize:(_Bool)arg2;
- (void)setDocumentBounds:(struct CGRect)arg1;
- (void)update:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct _UIWebViewportConfiguration rawViewConfiguration;
- (_Bool)shouldIgnoreScalingConstraints;
- (_Bool)shouldIgnoreVerticalScalingConstraints;
- (_Bool)shouldIgnoreHorizontalScalingConstraints;
@property(readonly, nonatomic) _Bool avoidsUnsafeArea;
@property(readonly, nonatomic) _Bool allowsUserScaling;
@property(readonly, nonatomic) float maximumScale;
@property(readonly, nonatomic) float minimumScale;
@property(readonly, nonatomic) float initialScale;

@end

