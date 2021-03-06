//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CBLTextField, NSString, UICollectionView;

@interface CBLFaceTextField : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UITextFieldDelegate>
{
    CBLTextField *_textField;
    id <CBLFaceTextFieldDataSource> _dataSource;
    id <CBLFaceTextFieldDelegate> _delegate;
    UICollectionView *_facesView;
}

@property(retain, nonatomic) UICollectionView *facesView; // @synthesize facesView=_facesView;
@property(nonatomic) __weak id <CBLFaceTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CBLFaceTextFieldDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CBLTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (float)widthOfAllFaces;
- (void)insertFaceAtIndexPath:(id)arg1;
- (void)deleteFaceFromIndexPath:(id)arg1;
- (void)reloadFaces;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

