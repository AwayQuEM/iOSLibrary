//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_UILAPropertySource.h"

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying>
{
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    _Bool _layoutFillsCanvas;
    _Bool _layoutUsesCanvasMarginsWhenFilling;
    _Bool _hasEstablishedBaseValues;
    _Bool _inLayoutArrangementUpdateSection;
    long long _axis;
}

@property(nonatomic, getter=isInLayoutArrangementUpdateSection) _Bool inLayoutArrangementUpdateSection; // @synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection;
@property(nonatomic) _Bool hasEstablishedBaseValues; // @synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems; // @synthesize _newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems; // @synthesize _newlyHiddenItems;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

