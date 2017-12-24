//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIVisualEffectLayerConfig.h>

@class NSDictionary, UIColor;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig
{
    UIColor *_vibrantColor;
    UIColor *_tintColor;
    NSDictionary *_filterAttributes;
}

+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4;
+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *filterAttributes; // @synthesize filterAttributes=_filterAttributes;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIColor *vibrantColor; // @synthesize vibrantColor=_vibrantColor;
- (void).cxx_destruct;
- (id)description;
- (void)deconfigureLayerView:(id)arg1;
- (void)configureLayerView:(id)arg1;

@end

