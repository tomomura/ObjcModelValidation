//
//  NSString+Validations.h
//  ObjcModelValidation
//
//  Created by Piet Brauer on 12.06.13.
//  Copyright (c) 2013 Piet Brauer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Validations)

/**
 Takes an array of strings and searches for it in self.
 Returns YES if strings where not found in string.
 @param exlusionArray Only accepts NSString objects
 @return BOOL value 
 */
-(BOOL)exclusion:(NSArray *)exclusionArray;

/**
 Takes an regex string and validates it.
 @param regexExpression Regex expression in NSString format.
 @return BOOL value
 */
-(BOOL)format:(NSString *)regexExpression;

/**
 Takes an array of strings and searches for it in self.
 Returns YES if strings was found in string.
 @param inclusionArray Only accepts NSString objects
 @return BOOL value
 */
-(BOOL)inclusion:(NSArray *)inclusionArray;

-(BOOL)lengthMin:(NSInteger)length;

-(BOOL)lengthMax:(NSInteger)length;

-(BOOL)lengthIn:(NSInteger)lengthMax and:(NSInteger)lengthMin;

-(BOOL)lengthIs:(NSInteger)length;

@end