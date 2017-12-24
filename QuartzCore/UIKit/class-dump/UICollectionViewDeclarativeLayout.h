//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, UICollectionLayoutGeometry, _UICollectionViewGeometricIndexer, _UIDataSourceSnapshotter;

@interface UICollectionViewDeclarativeLayout : UICollectionViewLayout
{
    long long _scrollDirection;
    NSArray *_sectionGeometries;
    UICollectionLayoutGeometry *_templateLayoutGeometry;
    NSArray *_sectionFrames;
    NSMutableDictionary *_cachedAttributes;
    _UICollectionViewGeometricIndexer *_sectionGeometricIndexer;
    _UIDataSourceSnapshotter *_dataSourceSnapshotter;
    struct CGSize _itemSize;
    struct CGRect _contentFrame;
}

@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter; // @synthesize dataSourceSnapshotter=_dataSourceSnapshotter;
@property(retain, nonatomic) _UICollectionViewGeometricIndexer *sectionGeometricIndexer; // @synthesize sectionGeometricIndexer=_sectionGeometricIndexer;
@property(retain, nonatomic) NSMutableDictionary *cachedAttributes; // @synthesize cachedAttributes=_cachedAttributes;
@property(retain, nonatomic) NSArray *sectionFrames; // @synthesize sectionFrames=_sectionFrames;
@property(retain, nonatomic) UICollectionLayoutGeometry *templateLayoutGeometry; // @synthesize templateLayoutGeometry=_templateLayoutGeometry;
@property(retain, nonatomic) NSArray *sectionGeometries; // @synthesize sectionGeometries=_sectionGeometries;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (id)_layoutGeometryForSection:(long long)arg1;
- (void)_configureSectionGeometries;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithLayoutGeometry:(id)arg1;
- (id)initWithLayoutGeometriesForSections:(id)arg1;

@end

