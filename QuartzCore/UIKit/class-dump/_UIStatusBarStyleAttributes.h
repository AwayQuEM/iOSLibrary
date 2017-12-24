//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, UIColor, UIFont, UITraitCollection;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying>
{
    long long _style;
    long long _mode;
    UITraitCollection *_traitCollection;
    long long _effectiveLayoutDirection;
    UIFont *_font;
    UIFont *_emphasizedFont;
    UIColor *_textColor;
    UIColor *_imageTintColor;
    UIColor *_imageDimmedTintColor;
    NSArray *_imageNamePrefixes;
}

+ (id)overriddenStyleAttributes;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *imageNamePrefixes; // @synthesize imageNamePrefixes=_imageNamePrefixes;
@property(copy, nonatomic) UIColor *imageDimmedTintColor; // @synthesize imageDimmedTintColor=_imageDimmedTintColor;
@property(copy, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *emphasizedFont; // @synthesize emphasizedFont=_emphasizedFont;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long effectiveLayoutDirection; // @synthesize effectiveLayoutDirection=_effectiveLayoutDirection;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)styleAttributesWithOverrides:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStatusBar:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

