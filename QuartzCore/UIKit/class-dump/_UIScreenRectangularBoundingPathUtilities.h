//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIScreenBoundingPathUtilities.h>

__attribute__((visibility("hidden")))
@interface _UIScreenRectangularBoundingPathUtilities : _UIScreenBoundingPathUtilities
{
}

- (struct CGRect)_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(double)arg2 inCoordinateSpace:(id)arg3;
- (struct CGRect)_inscribedRectInBoundingPathByInsettingRect:(struct CGRect)arg1 onEdges:(unsigned long long)arg2 inCoordinateSpace:(id)arg3 withOptions:(unsigned long long)arg4;
- (void)_loadBezierPathsForScreen:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

