//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion : _UIFocusRegion
{
    id <_UIFocusRegionContainer> _contentFocusRegionContainer;
    CDUnknownBlockType _contentFulfillmentHandler;
}

@property(copy, nonatomic) CDUnknownBlockType contentFulfillmentHandler; // @synthesize contentFulfillmentHandler=_contentFulfillmentHandler;
- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (long long)_visualRepresentationPatternType;
- (id)_visualRepresentationColor;
- (id)_loadContentFocusRegionContainer;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldCropRegionToSearchArea;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

