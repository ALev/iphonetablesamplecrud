//
//  CRUDItemController.h
//  iphonetablesamplecrud
//
//  Created by vickeryj on 3/20/09.
//  Copyright 2009 Joshua Vickery. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CRUDItemController : UIViewController {
	NSMutableArray *parentObjects;
	id managedObject;
}

@property(nonatomic, retain) NSMutableArray *parentObjects;
@property(nonatomic, retain) id managedObject;

@end
