//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSearchInfo : NSObject
{
    _Bool _didFindFocusBlockingBoundary;
    NSMutableArray *_mutableSnapshots;
    NSMutableArray *_mutableDestinationRegions;
}

@property(retain, nonatomic) NSMutableArray *mutableDestinationRegions; // @synthesize mutableDestinationRegions=_mutableDestinationRegions;
@property(retain, nonatomic) NSMutableArray *mutableSnapshots; // @synthesize mutableSnapshots=_mutableSnapshots;
@property(nonatomic) _Bool didFindFocusBlockingBoundary; // @synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary;
- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *destinationRegions;
@property(readonly, copy, nonatomic) NSArray *snapshots;
- (id)init;

@end

