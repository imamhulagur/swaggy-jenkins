//
// PipelineRunNodeedges.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct PipelineRunNodeedges: Codable {

    public var _id: String?
    public var _class: String?

    public init(_id: String?, _class: String?) {
        self._id = _id
        self._class = _class
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case _class
    }


}
