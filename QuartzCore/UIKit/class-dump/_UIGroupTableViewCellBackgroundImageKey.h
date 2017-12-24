//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying>
{
    _Bool _opaque;
    _Bool _selected;
    int _sectionLocation;
    UIColor *_backgroundColor;
    UIColor *_sectionBorderColor;
    double _sectionCornerRadius;
    double _sectionBorderWidth;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    UIColor *_selectionColor;
    double _leftPhase;
    double _rightPhase;
    long long _selectionStyle;
    double _screenScale;
    struct CGSize _size;
}

@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) double rightPhase; // @synthesize rightPhase=_rightPhase;
@property(nonatomic) double leftPhase; // @synthesize leftPhase=_leftPhase;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *bottomShadowColor; // @synthesize bottomShadowColor=_bottomShadowColor;
@property(retain, nonatomic) UIColor *topShadowColor; // @synthesize topShadowColor=_topShadowColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
@property(nonatomic) double sectionCornerRadius; // @synthesize sectionCornerRadius=_sectionCornerRadius;
@property(retain, nonatomic) UIColor *sectionBorderColor; // @synthesize sectionBorderColor=_sectionBorderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

