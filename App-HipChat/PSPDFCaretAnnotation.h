//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotation.h"

@interface PSPDFCaretAnnotation : PSPDFAnnotation
{
}

+ (BOOL)isWriteable;
+ (id)supportedTypes;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3;
- (id)init;
- (BOOL)isResizable;

@end

