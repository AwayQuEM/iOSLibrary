//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIInterfaceActionVisualStyle, UITraitCollection;

@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property(nonatomic) __weak id <UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (UIInterfaceActionVisualStyle *)defaultVisualStyleForTraitCollection:(UITraitCollection *)arg1 presentationStyle:(long long)arg2;
- (void)reloadVisualStyle;
@end

