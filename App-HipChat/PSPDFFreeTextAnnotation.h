//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotation.h"

#import "PSPDFFontDownloaderDelegate.h"

@class NSString;

@interface PSPDFFreeTextAnnotation : PSPDFAnnotation <PSPDFFontDownloaderDelegate>
{
    BOOL _enableVerticalResizing;
    BOOL _enableHorizontalResizing;
    int _intentType;
    int _lineEnd;
    float _lineHeight;
    NSString *_richTextString;
    struct UIEdgeInsets _innerRectInset;
}

+ (id)innerRectInsetJSONTransformer;
+ (id)lineEndJSONTransformer;
+ (id)keysForValuesToObserveForUndo;
+ (id)intentTypeJSONTransformer;
+ (id)propertyKeys;
+ (id)keyPathsForValuesAffectingPoint2;
+ (id)keyPathsForValuesAffectingKneePoint;
+ (id)keyPathsForValuesAffectingPoint1;
+ (void)load;
+ (BOOL)isWriteable;
+ (id)supportedTypes;
@property(copy, nonatomic) NSString *richTextString; // @synthesize richTextString=_richTextString;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) BOOL enableHorizontalResizing; // @synthesize enableHorizontalResizing=_enableHorizontalResizing;
@property(nonatomic) BOOL enableVerticalResizing; // @synthesize enableVerticalResizing=_enableVerticalResizing;
@property(nonatomic) struct UIEdgeInsets innerRectInset; // @synthesize innerRectInset=_innerRectInset;
@property(nonatomic) int lineEnd; // @synthesize lineEnd=_lineEnd;
@property(nonatomic) int intentType; // @synthesize intentType=_intentType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fontDownloaderDidFinish:(id)arg1 fontDescriptor:(id)arg2;
- (void)calculateLineHeight;
- (float)defaultFontSize;
- (id)defaultFontName;
- (struct CGSize)minimumSize;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (void)drawTextInContext:(struct CGContext *)arg1 options:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (void)setContents:(id)arg1;
- (BOOL)isResizable;
- (void)setTextBoundingBoxSize:(struct CGSize)arg1;
@property(nonatomic) struct CGRect textBoundingBox;
- (void)setBoundingBox:(struct CGRect)arg1 transform:(BOOL)arg2 includeOptional:(BOOL)arg3;
- (void)setBoundingBox:(struct CGRect)arg1 transformSize:(BOOL)arg2;
- (void)updateOptionalPropertiesWithTransform:(struct CGAffineTransform)arg1 isSizeChange:(BOOL)arg2 meanScale:(float)arg3;
- (BOOL)shouldUpdatePropertiesOnBoundsChange;
- (id)convertToIntentType:(int)arg1;
- (BOOL)isValidInnerRectInsets:(struct UIEdgeInsets)arg1;
- (struct CGPoint)pointAtIndex:(unsigned int)arg1;
- (void)setPoint:(struct CGPoint)arg1 atIndex:(unsigned int)arg2 notify:(BOOL)arg3;
@property(nonatomic) struct CGPoint kneePoint;
@property(nonatomic) struct CGPoint point2;
@property(nonatomic) struct CGPoint point1;
- (void)updatePropertiesWithTransform:(struct CGAffineTransform)arg1 isSizeChange:(BOOL)arg2 meanScale:(float)arg3;
- (void)updateCallout;
- (void)updateBoundingBoxAndInsets;
- (void)setPoints:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (struct CGSize)sizeWithConstraints:(struct CGSize)arg1;
- (void)sizeToFit;
- (id)description;
- (BOOL)isEqualToAnnotation:(id)arg1;
- (BOOL)parseCalloutProperties:(struct CGPDFDictionary *)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithContents:(id)arg1;
- (id)initWithContents:(id)arg1 calloutPoint1:(struct CGPoint)arg2;
- (id)init;

@end
