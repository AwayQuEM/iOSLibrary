//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UITouchForceObservationMessageReader;

__attribute__((visibility("hidden")))
@interface _UITouchForceMessage : NSObject
{
    _Bool _isReset;
    _UITouchForceObservationMessageReader *_observeReader;
    _Bool _shouldFilterDueToSystemGestures;
    double _unclampedTouchForce;
    double _maximumPossibleForce;
    double _timestamp;
    struct CGPoint _centroid;
}

+ (id)reset;
+ (id)observe:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldFilterDueToSystemGestures; // @synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures;
@property(nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double maximumPossibleForce; // @synthesize maximumPossibleForce=_maximumPossibleForce;
@property(nonatomic) double unclampedTouchForce; // @synthesize unclampedTouchForce=_unclampedTouchForce;
- (void).cxx_destruct;
- (void)ifObservationUnclamped:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;
- (void)ifObservation:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;

@end

