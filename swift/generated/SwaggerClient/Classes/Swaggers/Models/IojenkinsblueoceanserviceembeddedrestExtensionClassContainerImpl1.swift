//
// IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1: JSONEncodable {
    public var _class: String?
    public var links: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links?
    public var map: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["map"] = self.map?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
